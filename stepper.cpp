#include "stepper.h"

Stepper::Stepper(int stepPin, int dirPin, int enablePin) {
    this->stepPin = stepPin;
    this->dirPin = dirPin;
    this->enablePin = enablePin;
    
    this->currentPos = 0;
    this->targetPos = 0;
    pinMode(stepPin, OUTPUT);
    pinMode(dirPin, OUTPUT);
    pinMode(enablePin, OUTPUT);

    disable();
}

void Stepper::enable() {
    digitalWrite(enablePin, LOW);
}

void Stepper::disable() {
    digitalWrite(enablePin, HIGH);
}

void Stepper::update() {
    bool dir;
    if (this->targetPos > this->currentPos) {
        digitalWrite(dirPin, HIGH);
        dir = 0x1;
    }
    else if (this->targetPos < this->currentPos) {
        digitalWrite(dirPin, LOW);
        dir = 0x0;
    }
    else return;

    while(this->currentPos != this->targetPos) {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(100);
        digitalWrite(stepPin, LOW);
        
        if (dir == 0x1) this->currentPos++;
        else this->currentPos--;
    }
}

void Stepper::singleStep(bool dir) {
    if (dir == 0x1) digitalWrite(dirPin, HIGH);
    else if (dir == 0x0) digitalWrite(dirPin, LOW);
    else return;

    digitalWrite(stepPin, HIGH);
    delay(1000);
    digitalWrite(stepPin, LOW);
}