#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;
competition Competition;

vex::gyro gyroscope                         = vex::gyro( Brain.ThreeWirePort.D ); 

vex::motor LeftFront                                 = vex::motor( vex::PORT12 );
vex::motor LeftBack                                  = vex::motor( vex::PORT14 );
vex::motor RightFront                           = vex::motor( vex::PORT4, true );
vex::motor RightBack                           = vex::motor( vex::PORT10, true );
vex::motor ArmMotor                                   = vex::motor( vex::PORT6 );
vex::motor TrayMotor                                 = vex::motor( vex::PORT19 );
vex::motor LeftIntake   =  vex::motor( vex::PORT7, vex::gearSetting::ratio36_1 );
vex::motor RightIntake   = vex::motor( vex::PORT9, vex::gearSetting::ratio36_1 );

vex::controller Controller1          = vex::controller();

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // Nothing to initialize
}