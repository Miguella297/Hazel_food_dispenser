#include <Servo.h>

Servo myServo;

const int servoPin = 8;
const int stepDelay = 13;   // controls speed - lower = faster

void setup() {
  myServo.attach(servoPin);
  myServo.write(0);
  delay(300);

  // rotate 0 -> 180
  for (int pos = 0; pos <= 180; pos++ {
    myServo.write(pos);
    delay(stepDelay);
  }

  // rotate 180 -> 0
  for (int pos = 180; pos >= 0; pos --) {
    myServo.write(pos);
    delay(stepDelay);
  }
}

void loop() {
  // intentionally empty - nothing repeats
}
