#ifndef STEPPER_H
#define STEPPER_H

#include <Arduino.h>

const int STEPS_PER_REVOLUTION = 200;

class Stepper {
    public:
        Stepper(int stepPin, int dirPin, int enablePin);
        void enable();
        void disable();
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