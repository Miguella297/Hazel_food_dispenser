#include <Servo.h>
#include <EEPROM.h>

Servo myServo;

const int servoPin = 8;
const int stepDelay = 5;      // ms between each 1-degree step (controls "slow" speed)

void setup() {
  myServo.attach(servoPin);

  int lastState = EEPROM.read(eepromAddress); // 0 = was at 0, 1 = was at 180

  if (lastState == 0) {
    myServo.write(0);   // set starting position immediately , avoids snapping
    delay(300);

    // rotate 180 -> 0
    for (int pos = 0; pos <= 180; pos++) {
      myServo.write(pos);
      delay(stepDelay);
    }
    EEPROM.write(eepromAddress, 1); // remember it's now at 180
  } else {
    myServo.write(180);  // set starting position immediately
    delay(300);

    // rotate 180 -> 0
    for (int pos = 180; pos >= 0; pos--) {
      myServo.write(pos);
      delay(stepDelay);
    }
    EEPROM.write(eepromAddress, 0); // remember it's now back at 0
  }
}

void loop() {
  // intentionally empty - nothing repeat
}