
#include "SystemState.h"
#include <iostream>

State SystemState::externalPowerNet = Off;
State SystemState::FridgeExternalPowerNet = Off;
State SystemState::FridgeInternalPowerNet = Off;

void SystemState::setExternalPowerNet(State status){
    externalPowerNet = status;
    std::cout << "External PowerNet set" << "\n"; 
}

State SystemState::getExternalPowerNet() {
    return externalPowerNet;
}

void SystemState::setFridgeExternalPowerNet(State status){
    FridgeExternalPowerNet = status;

    // TODO also call the according output function
}

State SystemState::getFridgeExternalPowerNet() {
    return FridgeExternalPowerNet;
}

void SystemState::setFridgeInternalPowerNet(State status){
    FridgeInternalPowerNet = status;
    // TODO also call the according output function
}

State SystemState::getFridgeInternalPowerNet() {
    // TODO: maybe update here from the input signals?
    return FridgeInternalPowerNet;
}