# Hazel_food_dispenser
This is a small mini project for my dog, Hazel.

# Dog Food Dispenser

A motion-activated dog food dispenser built with an Arduino Uno, a PIR motion sensor, and a servo-controlled gate. Wave a hand near the sensor, and the dispenser releases a portion of kibble through a servo-actuated flap — built entirely from cardboard and basic craft materials.

## How It Works

1. A PIR motion sensor continuously watches for movement nearby.
2. When motion is detected, the Arduino signals a servo to swing open a flap/gate at the bottom of the cardboard container.
3. Kibble falls through the opening by gravity into a bowl below.
4. The servo closes the flap after a short delay, and a cooldown period prevents repeated triggering from lingering motion.

## Build Notes

The dispenser body and funnel were constructed from cardboard, with a popsicle-stick arm connecting the servo horn to the flap mechanism, and tape used for reinforcement and assembly. During testing, the original funnel opening was too narrow for the kibble size being used, so the funnel was widened to allow consistent, jam-free flow.

## Bill of Materials

| Item | Quantity | Notes |
|---|---|---|
| Arduino Uno | 1 | Main microcontroller |
| PIR motion sensor (HC-SR501) | 1 | Detects motion to trigger dispensing |
| SG90 Servo Motor | 1 | Opens/closes the dispenser flap |
| Cardboard | 1+ boxes | Dispenser body and funnel |
| Popsicle sticks | Several | Servo horn extension arm |
| Tape | — | Assembly and reinforcement |
| Jumper wires | ~5–6 | Arduino-to-sensor and Arduino-to-servo connections |

## Status

Two working dispensers were built, with the second benefiting from lessons learned during the first build — particularly around funnel sizing for larger kibble.
Jot something down
 
![food dispenser](pic1.jpg)
![supplies](pic2.jpg)
![Dispenser front view](pic3.jpg)
![Dispenser in action](pic4.jpg)

No Board files or Schematic PDF is found because a good majority the project elements were cardboard. There was also an arduino uno and servo motors.