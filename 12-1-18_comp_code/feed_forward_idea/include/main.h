#ifndef _PROS_MAIN_H_ //DO NOT TOUCH
#define _PROS_MAIN_H_ //DO NOT TOUCH

#define PROS_USE_SIMPLE_NAMES //If defined, instead of using long names for enums like E_CONTROLLER_MASTER, use more convient names usch as CONTROLLER_MASTER

//#define PROS_USE_LITERALS //If defined, C++ literals will be available for use. Make sure to also use the namespace pros::literals if you want it to work
                          //For instance, you can do `4_mtr = 50` to set motor 4's target velocity to 50

#include "api.h" //Includes all of the functions, variables, etc. of the PROS 3 language

using namespace pros; //Instead of typing pros::Motor() all the time, if you use this namepsace you can just do Motor()
//using namespace pros::literals; //Make sure to use this namespace if you defined PROS_USE_SIMPLE_NAMES

//You should include more files right under here
//ex: #include "file.h"

struct wayPoint {

    double leftChassis_Vel,
           rightChassis_Vel;

};

extern std::vector<wayPoint> auton;

wayPoint initWayPoint(double leftChassis_Vel, double rightChassis_Vel) {

    return {leftChassis_Vel, rightChassis_Vel};

}

extern int autonCount;

//DO NOT TOUCH BELOW STUFF, THIS MAKES THE CODE RUN
#ifdef __cplusplus
extern "C" {
#endif
void autonomous(void);
void initialize(void);
void disabled(void);
void competition_initialize(void);
void opcontrol(void);
#ifdef __cplusplus
}
#endif
//DO NOT TOUCH ABOVE STUFF, THIS MAKES THE CODE RUN

#ifdef __cplusplus //DO NOT TOUCH
//You can add C++ only headers in here
#endif //DO NOT TOUCH

#endif //DO NOT TOUCH