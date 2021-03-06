#ifndef INTAKE_H
#define INTAKE_H

void runIntake(float voltPerc); //runs the intake at a percentage of max voltage from -100% to 100%
void runIntakeTime(float voltPerc, int time); //runs the inyake at a percentage for a given amount of time
bool isBall(); //checks if the ball has passes through the intake
void getBall(int time); //tracks, follows, and intakes the ball
void initIntkVis(); //gives the IntkVis camera the signature for the ball
void flipCap(); //tracks, follows, and flips the cap

#endif