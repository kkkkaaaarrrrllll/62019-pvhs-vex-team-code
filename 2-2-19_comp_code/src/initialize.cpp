#include "main.h"

void initialize() {

    Task cpltGo (cpltControl, (void*)"PROS", TASK_PRIORITY_DEFAULT, TASK_STACK_DEPTH_DEFAULT, "catapult control task");

}

int autonCount = 0;

void lcdScroll() {

    if(autonCount > 3) {

        autonCount = 0;

    }

    else if(autonCount < 0) {

        autonCount = 3;

    }

    switch(autonCount) {

        case 0:
            lcd::set_text(1, "RED   FLAG    SIDE");
            lcd::set_text(2, "3 flags");
            lcd::set_text(3, "2 caps");
            lcd::set_text(4, "no parking");
            break;

        case 1:
            lcd::set_text(1, "RED   CAP    SIDE");
            lcd::set_text(2, "0 flags");
            lcd::set_text(3, "2 caps");
            lcd::set_text(4, "yes parking");
            break;

        case 2:
            lcd::set_text(1, "BLUE   FLAG    SIDE");
            lcd::set_text(2, "3 flags");
            lcd::set_text(3, "2 caps");
            lcd::set_text(4, "no parking");
            break;

        case 3:
            lcd::set_text(1, "BLUE   CAP    SIDE");
            lcd::set_text(2, "0 flags");
            lcd::set_text(3, "2 caps");
            lcd::set_text(4, "yes parking");
            break;

        default:
            lcd::set_text(1, "HOW DID YOU MESS UP KARL");
            lcd::set_text(2, "HOW DID YOU MESS UP KARL");
            lcd::set_text(3, "HOW DID YOU MESS UP KARL");
            lcd::set_text(4, "HOW DID YOU MESS UP KARL");
            break;

    }

}

void on_left_pressed() {

    autonCount--;
    lcdScroll();

}

void on_center_pressed() {

    autonCount = autonCount;
    lcd::shutdown();

}

void on_right_pressed() {

    autonCount++;
    lcdScroll();

}

//Runs after initialize() and before autonomous. This is intended for competition-specific initialization routines, such as an autonomous selector on the LCD.
void competition_initialize() {

    lcd::initialize();
    lcd::set_text(0, "choose auton");
    lcdScroll();
    lcd::register_btn0_cb(on_left_pressed);
    lcd::register_btn1_cb(on_center_pressed);
    lcd::register_btn2_cb(on_right_pressed);

}

//Runs while the robot is in the disabled state of Field Management System or the VEX Competition Switch
void disabled() {



}