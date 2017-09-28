// Random.pde
// -*- mode: C++ -*-
//
// Make a single stepper perform random changes in speed, position and acceleration
//
// Copyright (C) 2009 Mike McCauley
// $Id: Random.pde,v 1.1 2011/01/05 01:51:01 mikem Exp mikem $

#define IN1  16
#define IN2  4
#define IN3  5
#define IN4  0

#include "AccelStepper.h"

AccelStepper stepper(AccelStepper::FULL4WIRE, IN1,IN2,IN3,IN4);

void setup()
{  
}

void loop()
{
    if (stepper.distanceToGo() == 0)
    {
      	// Random change to speed, position and acceleration
      	// Make sure we dont get 0 speed or accelerations
      	delay(1000);
      	stepper.moveTo(rand() % 2000);
      	stepper.setMaxSpeed((rand() % 500) + 1);
      	stepper.setAcceleration((rand() % 2000) + 1);
    }
    stepper.run();
}
