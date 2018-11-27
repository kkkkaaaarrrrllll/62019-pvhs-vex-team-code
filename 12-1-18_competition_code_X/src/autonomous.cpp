#include "main.h" //DO NOT TOUCH

//Runs during the 15 second autonomous period
void autonomous() {

	vision_signature_s_t GREENFLAG;
    GREENFLAG.id = 1;
    GREENFLAG.range = 2.8;
    GREENFLAG.u_min = -3383;
    GREENFLAG.u_max = -2431;
    GREENFLAG.u_mean = -2907;
    GREENFLAG.v_min = -4711;
    GREENFLAG.u_max = -2891;
    GREENFLAG.v_mean = -3801;
    GREENFLAG.type = 0;
    shooterEye.set_signature(1, &GREENFLAG);

    /*if(autonCount == 0)
        autonBlueFlag();

    if(autonCount == 1)
        autonBlueFlagHorde();

    if(autonCount == 2)
        autonBlueCapLine();

    if(autonCount == 3)
        autonBlueCapFlip();
    
    if(autonCount == 4)
        autonRedFlag();
    
    if(autonCount == 5)
        autonRedFlagHorde();

    if(autonCount == 6)
        autonRedCapLine();

    if(autonCount == 7)
        autonRedCapFlip();*/
    
    vision_object_s_t closestObject;

    int comparingValue = 1000000;

    for(int i = 0; i < shooterEye.get_object_count(); i++){

        vision_object_s_t suspect = shooterEye.get_by_size(i);

        if(comparingValue > abs(suspect.x_middle_coord)){
            
            closestObject = suspect;
            comparingValue = abs(closestObject.x_middle_coord);

        }

    }

    while(true){

        comparingValue = 1000000;

        for(int i = 0; i < shooterEye.get_object_count(); i++){

            vision_object_s_t suspect = shooterEye.get_by_size(i);

            if(comparingValue > abs(suspect.x_middle_coord)){
            
                closestObject = suspect;
                comparingValue = abs(closestObject.x_middle_coord);

            }

        }

        std::cout << closestObject.x_middle_coord << ":" << shooterEye.get_object_count() << "\n";

        delay(1);

    }
    autonRedCapFlip();

}