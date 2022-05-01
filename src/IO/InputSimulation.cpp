#include "InputSimulation.h"

InputSimulation::InputSimulation(){
    // start thread
    _thread = std::thread(&InputSimulation::waitForUserInput, this);
}

InputSimulation::~InputSimulation(){
    _thread.join();
}

void InputSimulation::readInputs(){
    if (_queue.size() != 0) {
        Command cmd = _queue.receive();

        switch(cmd) {
            case Ext_PS_On:
                SystemState::setExternalPowerNet(State::On);
                break;
            case Ext_PS_Off:
                SystemState::setExternalPowerNet(State::Off);
                break;
        }
    }
}

void InputSimulation::waitForUserInput(){
    

    std::string input;
    Command cmd = undefined;

    while (true) {
        do {
                std::cout << "Possible Commands: 230V_On / 230V_Off \n";
                std::cin >> input;

                if (input.compare("230V_On") == 0) {
                    cmd = Ext_PS_On;
                } else if (input.compare("230V_Off") == 0) {
                    cmd = Ext_PS_Off;
                } else {
                    std::cout << "undefined command \n";
                }
                

            } while (cmd == undefined);
            

            _queue.send(std::move(cmd));
    }
    
}