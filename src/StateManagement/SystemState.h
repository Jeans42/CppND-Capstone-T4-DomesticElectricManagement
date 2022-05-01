/* contains the state of the system like
 * - Temperatures
 * - Switch states
 * - Relais states
 */


#ifndef SYSTEMSTATE_H
#define SYSTEMSTATE_H

enum State
{
    On,
    Off,
};

class SystemState
{
    public:
        static void setExternalPowerNet(State status);
        static State getExternalPowerNet();

        static void setRefrigeratorExternalPowerNet(State status);
        static State getRefrigeratorExternalPowerNet();

        static void setRefrigeratorInternalPowerNet(State status);
        static State getRefrigeratorInternalPowerNet();

    private:
        static SystemState* instance;

        static State externalPowerNet;
        static State refrigeratorExternalPowerNet;
        static State refrigeratorInternalPowerNet;
};


#endif
