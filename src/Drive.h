/*
 * Drive.h
 *
 *  Created on: Dec 5, 2016
 *      Author: Admin
 */
#include "wpilib.h"
#ifndef SRC_DRIVE_H_
#define SRC_DRIVE_H_

class Drive
{
public:
	Drive();
	~Drive();
	void setForwardSpeed(float forward);
	void setTurnSpeed(float turn);
	void updateRightMotors(float speed);
	void updateLeftMotors(float speed);
	void drive(float x, float y);
private:
	CANTalon* frontLeftMotor;
	CANTalon* middleLeftMotor;
	CANTalon* middleRightMotor;
	CANTalon* frontRightMotor;
	CANTalon* backLeftMotor;
	CANTalon* backRightMotor;
	float forwardSpeed;
	float turnSpeed;
};




#endif /* SRC_DRIVE_H_ */
