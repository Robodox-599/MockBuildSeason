/*
 * Drive.cpp
 *
 *  Created on: Dec 5, 2016
 *      Author: Admin
 */

#include "Drive.h"

Drive::Drive()
{
	frontLeftMotor = new CANTalon(7);
	frontRightMotor = new CANTalon(0);
	backLeftMotor = new CANTalon(1);
	backRightMotor = new CANTalon(2);
	middleLeftMotor = new CANTalon(3);
	middleRightMotor = new CANTalon(4);

	forwardSpeed = 0;
	turnSpeed = 0;
}

Drive::~Drive()
{
	frontLeftMotor = nullptr;
	frontRightMotor = nullptr;
	backLeftMotor = nullptr;
	backRightMotor = nullptr;
	middleLeftMotor = nullptr;
	middleRightMotor = nullptr;
	delete frontLeftMotor;
	delete frontRightMotor;
	delete backLeftMotor;
	delete backRightMotor;
	delete middleLeftMotor;
	delete middleRightMotor;
}

void Drive::drive(float x, float y)
{
	setForwardSpeed(y);
	setTurnSpeed(x);

	updateLeftMotors(forwardSpeed - turnSpeed);
	updateRightMotors(forwardSpeed + turnSpeed);
}

void Drive::setForwardSpeed(float forward)
{
	if (forwardSpeed >= 0.3 ||forwardSpeed <= -0.3)
	{
		forwardSpeed = forward;
	}
	else
	{
		forwardSpeed = 0;
	}
}

void Drive::setTurnSpeed(float turn)
{
	if (turnSpeed>= 0.3 || turnSpeed<= -0.3)
	{
		turnSpeed = turn;
	}
	else
	{
		turnSpeed = 0;
	}
}

void Drive::updateLeftMotors(float speed)
{
	frontLeftMotor -> Set(-speed);
	backLeftMotor -> Set(-speed);
	middleLeftMotor -> Set(-speed);
}

void Drive::updateRightMotors(float speed)
{
	frontRightMotor -> Set(speed);
	backRightMotor -> Set(speed);
	middleRightMotor -> Set(speed);
}
