# Project 2 Blinky-Buzzy Toy

The purpose of this project was to understand the MSP430's architecture and
how the launchpad board work - leds, buzzer and switches work in unison.
To successfully complete the lab, we were to make a toy that had changing
lights, made use of the buttons on the launchpad (green) board and made noise.

## Functions of the toy:

* The toy will start in a standby state, no sounds or LEDs on.
* When S1 is pressed, the red LED will illuminate solely and song1 will play
while S1 remains pressed. Even after S1 is released, the red LED will stay illuminated.
* When S2 is pressed, the green LED will illuminate solely and song2 will
play while S2 remains pressed. The green LED will stay illuminated solely.
* When S3 is pressed, the green LED and the red LED will both illuminate and
song3 will play while S3 remains pressed. The green LED and red LED will
remain illuminated together.
* When S4 is pressed, the green LED and the red LED will both be off and song4
will play while S4 remains pressed. The green LED and red LED will remain
illuminated together. You can say that after S4 is released, the toy is back in the 
standy state since no LEDs are illuminated and no music is playing.

## Running Toy:

* Make sure the MSP430 is connected via USB.
* Open up the /src folder.
* Type "make load" and enter.
* The file will be loaded onto the MSP430. Play away!
* To clean contents, run "make clean".


