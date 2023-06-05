#line 1 "C:\\Users\\ethan\\Desktop\\Projects\\caffeine-machine\\Pins.h"
#ifndef PINS_H
#define PINS_H

enum Motor {X, Y, Z, E, Q};

const int X_STEP_PIN   =   54;
const int X_DIR_PIN    =   55;
const int X_ENABLE_PIN =   38;
const int X_MIN_PIN    =    3;
const int X_MAX_PIN    =    2;

const int Y_STEP_PIN   =   60;
const int Y_DIR_PIN    =   61;
const int Y_ENABLE_PIN =   56;
const int Y_MIN_PIN    =   14;
const int Y_MAX_PIN    =   15;

const int Z_STEP_PIN   =   46;
const int Z_DIR_PIN    =   48;
const int Z_ENABLE_PIN =   62;
const int Z_MIN_PIN    =   18;
const int Z_MAX_PIN    =   19;

const int E_STEP_PIN   =   26;
const int E_DIR_PIN    =   28;
const int E_ENABLE_PIN =   24;

const int Q_STEP_PIN   =   36;
const int Q_DIR_PIN    =   34;
const int Q_ENABLE_PIN =   30;

#endif