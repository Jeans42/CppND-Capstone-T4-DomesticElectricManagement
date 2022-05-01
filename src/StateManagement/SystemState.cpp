
#include "SystemState.h"
#include <iostream>

void SystemState::setExternalPowerNet(State status){
    externalPowerNet = status;
    std::cout << "External PowerNet set";
}

State SystemState::getExternalPowerNet() {
    return externalPowerNet;
}

void SystemState::setRefrigeratorExternalPowerNet(State status){
    refrigeratorExternalPowerNet = status;

    // TODO also call the according output function
}

State SystemState::getRefrigeratorExternalPowerNet() {
    return refrigeratorExternalPowerNet;
}

void SystemState::setRefrigeratorInternalPowerNet(State status){
    refrigeratorInternalPowerNet = status;
    // TODO also call the according output function
}

State SystemState::getRefrigeratorInternalPowerNet() {
    // TODO: maybe update here from the input signals?
    return refrigeratorInternalPowerNet;
}