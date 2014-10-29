#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S1,     joy,            sensorI2CMuxController)
#pragma config(Sensor, S2,     touchSensor,    sensorTouch)
#pragma config(Sensor, S3,     lightSensor,    sensorLightActive)
#pragma config(Motor,  motorA,          dontforgetthesemicolons, tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorB,          frontleft,     tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          frontright,    tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C1_1,     backleft,      tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     backright,     tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C2_1,    servo1,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
while (SensorValue(touchSensor)==0)//Stuck on how to tell this to stop in autonomous- touch or ultrasonic would probably be best bet//
	//That or just wait for the teleop//
{
	if (SensorValue(lightSensor) > 40)
	{
		motor [frontright]=80;
		motor [backright]=80;
		motor [frontleft]=0;
		motor [backleft]=0;
	}
	else
	{
		motor [frontleft]=80;
		motor [backleft]=80;
		motor [frontright]= 0;
		motor [backright]=0;
	}
	//If I have assigned these motors wrong, please tell me//
}
motor [frontright]=0;
motor [frontleft]=0;
motor [backright]=0;
motor [backleft]=0;

}
