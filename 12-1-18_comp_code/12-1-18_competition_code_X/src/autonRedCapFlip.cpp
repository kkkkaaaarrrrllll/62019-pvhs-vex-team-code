#include "main.h"

void autonRedCapFlip(){

    drivePD(1.8);
    intake.move(90);
    drivePD(0.59);
    delay(375);
    drivePD(-0.3);
    intakeLift.set_value(1);
    delay(2000);
    intakeLift.set_value(0);
    delay(400);
    /*pvitChassis(45, 100);
    delay(600);
    intake.move(-90);
    delay(1000);

    drivePD(-0.6);
    drivePD(2.3);
    drivePD(-0.6);
    pvitChassis(-130, 150);*/
    pvitChassis(85, 150);
    delay(1500);
<<<<<<< HEAD:12-1-18_competition_code_X/src/autonRedCapFlip.cpp
    chassisTransmission.set_value(1);
    intake.move(0);
    driveRelativeLeft(3.1, 200);
    driveRelativeRight(3.1, 200);
=======
    drivePD(1.8);
    intake.move(0);
>>>>>>> 7b7fd5a6b9335147aaedd49cdb732272fbc60005:12-1-18_comp_code/12-1-18_competition_code_X/src/autonRedCapFlip.cpp

}