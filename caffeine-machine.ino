#include <Arduino.h>
#include "stepper.h"
#include "pins.h"
#include "run-state.h"

/**********************
 *   Stepper objects
 * --------------------
 * x_stepper:     higher
 * y_stepper:      lower
 * z_stepper:     rotate
 * e_stepper:   extruder
 */

void setup() {
    // initialize the serial port
    Serial.begin(115200);

    pinMode(13, OUTPUT);
    Stepper x_stepper(X_STEP_PIN, X_DIR_PIN, X_ENABLE_PIN);
    Stepper y_stepper(Y_STEP_PIN, Y_DIR_PIN, Y_ENABLE_PIN);
    Stepper z_stepper(Z_STEP_PIN, Z_DIR_PIN, Z_ENABLE_PIN);
    Stepper e_stepper(E_STEP_PIN, E_DIR_PIN, E_ENABLE_PIN);
    Stepper q_stepper(Q_STEP_PIN, Q_DIR_PIN, Q_ENABLE_PIN);
    /*
    z_stepper.enable();
    z_stepper.singleStep(HIGH);
    z_stepper.singleStep(HIGH);
    z_stepper.singleStep(HIGH);
    */
}

void loop() {
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
}