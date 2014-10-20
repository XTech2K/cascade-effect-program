#pragma config(Hubs,  S1, HTMotor,  HTMotor,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     left1,         tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C1_2,     left2,         tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_1,     right1,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     right2,        tmotorTetrix, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"

void initializeRobot()
{

	return;
}

float DZ(float input){
	if(input < 15 && input > -15){
		return 0;
	}else{
		return input;
	}
}

task drive(){

	while(true){
        getJoystickSettings(joystick);
        motor[left1] = pow((DZ(joystick.joy1_y1)/128.0), 3)*100;
        motor[left2] = pow((DZ(joystick.joy1_y1)/128.0), 3)*100;
        motor[right1] = pow((DZ(joystick.joy1_y2)/128.0), 3)*100;
        motor[right2] = pow((DZ(joystick.joy1_y2)/128.0), 3)*100;

	}
}

task main()
{
	initializeRobot();

	StartTask(drive);

	while (true){
	}
}
