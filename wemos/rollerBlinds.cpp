#include "rollerBlinds.h"

void RollerBlinds::moveToTop()
{
    stepper.enableOutputs();
    delay(100);
    stepper.moveTo(posTop);
}

void RollerBlinds::moveToBot()
{
    stepper.enableOutputs();
    delay(100);
    stepper.moveTo(posBot);
}

void RollerBlinds::alreadyDown()
{
    posTop -= posBot + 500;
    posBot -= posBot + 500;
    stepper.enableOutputs();
    delay(100);
    stepper.moveTo(posBot);
}
