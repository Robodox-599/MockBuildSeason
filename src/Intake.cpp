/*
 * Intake.cpp
 *
 *  Created on: Dec 7, 2016
 *      Author: Admin
 */

#include "Intake.h"

Intake::Intake()
{
	leftIntakeMotor = new CANTalon(0);
	rightIntakeMotor = new CANTalon(1);
}

Intake::~Intake()
{
	leftIntakeMotor = nullptr;
	rightIntakeMotor = nullptr;
	delete leftIntakeMotor;
	delete rightIntakeMotor;
}

void Intake::intakeRun(float speed)
{
	if (speed > 0.3 || speed < -0.3)
	{
		leftIntakeMotor-> Set(speed);
		rightIntakeMotor-> Set(speed);
	}
	else
	{
		leftIntakeMotor-> Set(0);
		rightIntakeMotor -> Set(0);
	}
}
