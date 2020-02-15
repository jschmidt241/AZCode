using namespace vex;

extern brain Brain;
extern controller Controller1;
extern competition Competition;

extern gyro gyroscope;

extern motor LeftFront;
extern motor LeftBack;
extern motor RightFront;
extern motor RightBack;
extern motor TrayMotor;
extern motor ArmMotor;
extern motor LeftIntake;
extern motor RightIntake;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void);