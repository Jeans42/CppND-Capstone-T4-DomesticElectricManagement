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

        static void setFridgeExternalPowerNet(State status);
        static State getFridgeExternalPowerNet();

        static void setFridgeInternalPowerNet(State status);
        static State getFridgeInternalPowerNet();

    private:

        static State externalPowerNet;
        static State FridgeExternalPowerNet;
        static State FridgeInternalPowerNet;
};


#endif
