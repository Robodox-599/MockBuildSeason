/*
 * Lift.h
 *
 *  Created on: Nov 30, 2016
 *      Author: Admin
 */
#include "wpilib.h"
#ifndef SRC_LIFT_H_
#define SRC_LIFT_H_

class Lift
{
public:
	Lift();
	~Lift();
	void pistonIn(bool pull);
private:
	DoubleSolenoid* leftLiftPiston;
	DoubleSolenoid* rightLiftPiston;
};



#endif /* SRC_LIFT_H_ */
