/* output component for simulation: prints status to console */


#ifndef OUTPUTSIMULATION_H
#define OUTPUTSIMULATION_H

#include "IOutput.h"

class OutputSimulation : public IOutput 
{
    public:
        void setRefrigeratorExternalPowerNet(State st);
        void setRefrigeratorInternalPowerNet(State st);

    private:
        void printState(State st);
};


#endif
