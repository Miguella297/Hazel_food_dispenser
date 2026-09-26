




## Hazel food dispenser
This is a medium sized project for my dog, her name is Hazel.

# The dog food dispenser for Hazel.

A motion type activated dog food dispenser that was indeed built with an Arduino Uno and a servo controlled gate. Originally, I would have liked to have a PIR motion sensor when waved at, the servo horn would rotate the dispenser floor automatically. I unfortunately ran out of time for this but the project still works fundamentally nonetheless.

# How it works

An Arduino UNO is powered up by code on the Arduino IDE. The Arduino uno powers up a servo which horn rotates the dispenser to poor out dog food kebbles. Right now, the servo must be held in one hand in order to rotate the dispenser, but I will soon change that.

# Bill of materials
Arduino Uno,
SG90 Servo Motor,
Cardboard,
Rope,
Popsicle sticks,
Elastic bands,
Hot glue,
dog food,
Jumper wires,
cable.

 No Board files or schematic  PDF is found because a good majority of the project is made from straight cardboard material. There are as well the Arduino Uno, the servo motors, and a little more.
 
 ![food dispenser](pic1.jpg)
 ![progress](pic2.jpg)
 ![full](pic3.jpg)
 ![more](pic4.jpg)

My demo video for the project

<<<<<<< HEAD
# Assemble instructions

1> **Build the body**
Assemble a cardboard box to form the main body of the dispenser (8 by 8 by 10cm typically)

2> **Build the funnel**
Cut out and fold cardboard into a funnel shape wide at the top. (8 by 8 cm) then attach to the inside of the cardboard box.

3> **Cut the dispensing opening**
Cut an opening at the bottom of the funnel however wide you would like but still smaller than the top of the funnel. I suggest 4 by 4 cm.

4> **Build the level/gate mechanism**
Construct a lever or flap that blocks the opening when at rest. This step is optional, I made mine out of cardboard.

5> **Mount the servo**
Attach the servo to the body, positioned so its horn can pull the string down as showed in the demo video

6> **Attach the string to the servo horn**
Tie or glue the string to the servo horn so when the servo rotates, the mechanism of the dispenser (funnel) moves downward.

7> **Wire the electronics**
Instructions and wiring diagram will be found in the repo.
-Servo signal twice
-Servo power ground
-PIR sensor VCC

8> **Upload the code**
Program the Arduino so that motion detected by the PIR sensor triggers the code.

9> **Test and callibrate**
Test the project

10> **Decorate**
Add any artwork or designs of your desires (makes sure they are appropriate).


# Wiring diagram

 ![food dispenser](wiring_diagram.jpg)
