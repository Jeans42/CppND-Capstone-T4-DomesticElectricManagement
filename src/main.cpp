#include <iostream>
#include "IO/InputSimulation.h"


int main() {
    InputSimulation* input = new InputSimulation();
    while(true) {
        input->readInputs();

    }
}