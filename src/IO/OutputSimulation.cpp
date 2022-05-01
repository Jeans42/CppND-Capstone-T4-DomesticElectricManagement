
#include <iostream>
#include "OutputSimulation.h"

void OutputSimulation::setRefrigeratorExternalPowerNet(State st) {
    std::cout << "Switched 230V Net for Refrigerator to ";
    printState(st);
}

void OutputSimulation::setRefrigeratorInternalPowerNet(State st) {
    std::cout << "Switched 12V Net for Refrigerator to ";
    printState(st);
}

void OutputSimulation::printState(State st) {
    switch(st) {
        case State::Off:
            std::cout << "OFF \n";
            break;
        case State::On:
            std::cout << "ON \n";
            break;
        default:
            std::cout << "ERROR \n";
            break;
    }
}