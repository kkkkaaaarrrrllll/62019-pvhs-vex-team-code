#ifndef BASE_H
#define BASE_H

void runLeftBase(float voltPerc); //runs the left base at a percentage of max voltage from -100% to 100%
void runRightBase(float voltPerc); //runs the right base at a percentage of max voltage from -100% to 100%

void moveStraight(float setPoint, int time, bool shooot = 0, int shootTime = 0); //move base on a straight line, takes in a distance with direction
void pvtBase(float setPoint, int time); //pivots base in place, takes in an angle whose sign is its direction

float getLeftPos();
float getRightPos();
float getYaw();
void resetEncs();
void resetYaw();

void moveMogo();

#endif