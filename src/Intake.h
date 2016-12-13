/*
 * Intake.h
 *
 *  Created on: Dec 7, 2016
 *      Author: Admin
 */
#include "wpilib.h"
#ifndef SRC_INTAKE_H_
#define SRC_INTAKE_H_

class Intake
{
public:
	Intake();
	~Intake();
	void intakeRun(float speed);

private:
	CANTalon* leftIntakeMotor;
	CANTalon* rightIntakeMotor;
};



#endif /* SRC_INTAKE_H_ */
