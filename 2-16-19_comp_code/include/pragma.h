#ifndef PRAGMA_H
#define PRAGMA_H

extern Controller master;

//V5 Components
extern Motor leftBase1; //first motor on the left side of the base
extern Motor leftBase2; //second motor on the left side of the base
extern Motor leftBase3; //third motor on the left side of the base, but only X team has it
extern Motor rightBase1; //first motor on the right side of the base
extern Motor rightBase2; //second motor on the right side of the base
extern Motor rightBase3; //third motor on the right side of the base, but only X team has it
extern Motor intk; //motor that runs the intake
extern Motor cplt; //motor that runs the catapult

extern Vision cpltVis; //vision sensor on catapult to aid in flag aiming

//Legacy Components
extern ADIDigitalIn whichTeam;
extern ADIAnalogIn cpltPot;
extern ADIGyro gyro;
extern ADIEncoder distEnc;

#endif