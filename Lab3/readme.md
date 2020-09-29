
# Motors, Power, Paper Prototyping
## Pre-Lab
## Overview
For this assignment, you are going to 

A) [Actuating DC Motors](#part-a-actuating-dc-motors) 

B) [Actuating Servo Motors](#part-b-actuating-servo-motors) 

C) [Integrating Input and Output](#part-c-integrating-input-and-output)

D) [Autonomy!](#part-d-autonomy)

E) [Paper Display](#part-e-paper-display) 

F) [Make it your own](#part-f-make-it-your-own)

## Part B. Actuating Servo motors
### Part 1. Connect the Servo to your breadboard
**a. Which color wires correspond to power, ground and signal?**
Red, brown and yellow respectively.

### Part 2. Connect the Servo to your Arduino
**a. Which Arduino pin should the signal line of the servo be attached to?**
Signal <--- Pin9. (PWM) - myservo.attach(9)


**b. What aspects of the Servo code control angle or speed?**
 Code Excerpt: for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
* Controlling the Angle - Changing the range of the loop (currently 0-180).
* Controlling the speed - Changing the degree step for each loop will decrease/increase the speed. Alrenateively the delay value could be altered.

## Part C. Integrating input and output
Servo rotates with respect to potentiometer angle (see code - sweep)

## Part D. Autonomy!
**Include a photo/movie of your autonomous device in action.**
[Video](https://github.com/OiBoii/Interactive-Lab-Hub/blob/master/Lab3/PXL_20200929_055402003.mp4)
[Code](https://github.com/OiBoii/Interactive-Lab-Hub/blob/master/Lab3/Sweep.ino)

## Part E. Paper display
**a. Make a video of your paper display in action.**

<img src="https://github.com/OiBoii/Interactive-Lab-Hub/blob/master/Lab3/Paper%20Display.jpg">

## Part F. Make it your own

[Code](https://github.com/OiBoii/Interactive-Lab-Hub/tree/master/Lab2/2b_lowly)

**a. Make a video of your final design in action.**

The monitor was supposed to display the value of the potentiometer as seen in lab two.  Unfortunately that failed to work. 
