#ifndef PRAGMA_H
#define PRAGMA_H

extern Motor leftChassis1;
extern Motor leftChassis2;
extern Motor rightChassis1;
extern Motor rightChassis2;
extern Motor intake;
extern Motor catapult;

extern Vision catapultEye;

extern ADIDigitalOut intakePiston1;
extern ADIDigitalOut intakePiston2;
extern ADIDigitalOut leftChassisTransmissionPiston;
extern ADIDigitalOut rightChassisTransmissionPiston;
extern ADIDigitalOut capDescorerPiston;

extern ADIAnalogIn catapultPotent;
extern ADIAnalogIn ballLoaderLightSensor;

#endif