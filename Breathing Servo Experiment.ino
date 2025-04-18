# Arduino Code for Continuous Servo Sweep
#include <Servo.h>

Servo servo;
const int SERVO_PIN = 9;  // Servo signal pin connected to digital pin 9

// Motion control parameters
const int MIN_ANGLE = 0;
const int MAX_ANGLE = 180;
const int STEP = 1;
const int DELAY = 15;  // Slight delay for smooth motion

void setup() {
    servo.attach(SERVO_PIN);
    servo.write(MIN_ANGLE);  // Start at minimum position
}

void loop() {
    // Forward sweep
    for (int angle = MIN_ANGLE; angle <= MAX_ANGLE; angle += STEP) {
        servo.write(angle);
        delay(DELAY);
    }

    // Backward sweep
    for (int angle = MAX_ANGLE; angle >= MIN_ANGLE; angle -= STEP) {
        servo.write(angle);
        delay(DELAY);
    }
}
