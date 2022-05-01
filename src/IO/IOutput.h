/* Interface for output component */


#ifndef IOUTPUT_H
#define IOUTPUT_H

#include "../StateManagement/SystemState.h" // used for the enums

class IOutput 
{
    public:
        ~IOutput() = default;

        // set the relais for 230V Refrigerator
        virtual void setRefrigeratorExternalPowerNet(State targetState) = 0;

        // set the relais for 12V Refrigerator
        virtual void setRefrigeratorInternalPowerNet(State targetState) = 0;
        
};


#endif