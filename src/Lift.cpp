/*
 * Lift.cpp
 *
 *  Created on: Dec 1, 2016
 *      Author: Admin
 */

#include "Lift.h"

Lift::Lift()
{
	leftLiftPiston = new DoubleSolenoid(1,2);
	rightLiftPiston = new DoubleSolenoid(2,3);
}
Lift::~Lift()
{
	leftLiftPiston = nullptr;
	rightLiftPiston = nullptr;
	delete leftLiftPiston;
	delete rightLiftPiston;
}

void Lift::pistonIn(bool push)
{
	if (push == true)
	{
		leftLiftPiston -> Set(DoubleSolenoid::kForward);
		rightLiftPiston -> Set(DoubleSolenoid::kForward);
	}
	else
	{
		leftLiftPiston -> Set(DoubleSolenoid::kReverse);
		rightLiftPiston -> Set(DoubleSolenoid::kReverse);
	}
}
