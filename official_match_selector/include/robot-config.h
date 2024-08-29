using namespace vex;

extern brain Brain;

// VEXcode devices
extern competition Competition;
extern controller Controller1;
extern motor intake;
extern inertial Inertial7;
extern rotation tracking1;
extern rotation tracking2;
extern digital_out PTO;
extern digital_out clamp;

extern motor LF;
extern motor LM;
extern motor LB;
extern motor RF;
extern motor RM;
extern motor RB;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );