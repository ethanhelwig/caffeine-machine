# 1 "C:\\Users\\ethan\\Desktop\\Projects\\caffeine-machine\\caffeine-machine.ino"
# 2 "C:\\Users\\ethan\\Desktop\\Projects\\caffeine-machine\\caffeine-machine.ino" 2
# 3 "C:\\Users\\ethan\\Desktop\\Projects\\caffeine-machine\\caffeine-machine.ino" 2
# 4 "C:\\Users\\ethan\\Desktop\\Projects\\caffeine-machine\\caffeine-machine.ino" 2
# 5 "C:\\Users\\ethan\\Desktop\\Projects\\caffeine-machine\\caffeine-machine.ino" 2
# 6 "C:\\Users\\ethan\\Desktop\\Projects\\caffeine-machine\\caffeine-machine.ino" 2
# 7 "C:\\Users\\ethan\\Desktop\\Projects\\caffeine-machine\\caffeine-machine.ino" 2

/**********************

 *   Stepper objects

 * --------------------

 * x_stepper:     higher

 * y_stepper:      lower

 * z_stepper:     rotate

 * e_stepper:   extruder

 */
# 17 "C:\\Users\\ethan\\Desktop\\Projects\\caffeine-machine\\caffeine-machine.ino"
void setup() {
    // initialize the serial port
    Serial.begin(115200);

    pinMode(13, 0x1);
    RampsStepper x_stepper(X_STEP_PIN, X_DIR_PIN, X_ENABLE_PIN);
    RampsStepper y_stepper(Y_STEP_PIN, Y_DIR_PIN, Y_ENABLE_PIN);
    RampsStepper z_stepper(Z_STEP_PIN, Z_DIR_PIN, Z_ENABLE_PIN);
    RampsStepper e_stepper(E_STEP_PIN, E_DIR_PIN, E_ENABLE_PIN);
    RampsStepper q_stepper(Q_STEP_PIN, Q_DIR_PIN, Q_ENABLE_PIN);
    /*

    z_stepper.enable();

    z_stepper.singleStep(HIGH);

    z_stepper.singleStep(HIGH);

    z_stepper.singleStep(HIGH);

    */
# 33 "C:\\Users\\ethan\\Desktop\\Projects\\caffeine-machine\\caffeine-machine.ino"
}

void loop() {
    digitalWrite(13, 0x1);
    delay(1000);
    digitalWrite(13, 0x0);
    delay(1000);
}
