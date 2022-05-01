/* output component for simulation: prints status to console */


#ifndef OUTPUTSIMULATION_H
#define OUTPUTSIMULATION_H

#include "IOutput.h"

class OutputSimulation : public IOutput 
{
    public:
        void setFridgeExternalPowerNet(State st);
        void setFridgeInternalPowerNet(State st);

    private:
        void printState(State st);
};


#endif
