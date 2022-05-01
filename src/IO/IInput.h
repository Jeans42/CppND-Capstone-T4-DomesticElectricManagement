/* Interface for input component */


#ifndef IINPUT_H
#define IINPUT_H

class IInput 
{
    public:
        ~IInput() = default;

        
        virtual void readInputs() = 0;
};


#endif