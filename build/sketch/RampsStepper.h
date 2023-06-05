#line 1 "C:\\Users\\ethan\\Desktop\\Projects\\caffeine-machine\\RampsStepper.h"
#ifndef RAMPSSTEPPER_H
#define RAMPSSTEPPER_H

#include <Arduino.h>

const int STEPS_PER_REVOLUTION = 200;

class RampsStepper {
    public:
        RampsStepper(int stepPin, int dirPin, int enablePin);
        void enable();
        void disable();
        void setCurrPos(int);
        void setTrgtPos(int);
        void update();
        void singleStep(bool);
    private:
        int stepPin;
        int dirPin;
        int enablePin;
        int currentPos;
        int targetPos;
};

#endif