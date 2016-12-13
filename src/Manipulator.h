/*
 * Manipulator.h
 *
 *  Created on: Dec 7, 2016
 *      Author: Admin
 */
#include "wpilib.h"
#ifndef SRC_MANIPULATOR_H_
#define SRC_MANIPULATOR_H_

class Manipulator
{
public:
	Manipulator();
	~Manipulator();

private:
	CANJaguar* speedControl;
	HasBeenMoved* changePosition;
	RobotDeleter* callDestructor;
};



#endif /* SRC_MANIPULATOR_H_ */










