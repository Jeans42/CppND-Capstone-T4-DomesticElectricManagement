
#ifndef INPUTSIMULATION_H
#define INPUTSIMULATION_H

#include <iostream>
#include <thread>
#include "IInput.h"
#include "../lib/MessageQueue.h"
#include "../StateManagement/SystemState.h"

enum Command {
    undefined,
    Ext_PS_On,
    Ext_PS_Off,
};

class InputSimulation : public IInput
{
    public:
        InputSimulation();
        ~InputSimulation();
        void readInputs();

    private:
        void waitForUserInput();

        MessageQueue<Command> _queue;
        std::thread _thread;
};

#endif