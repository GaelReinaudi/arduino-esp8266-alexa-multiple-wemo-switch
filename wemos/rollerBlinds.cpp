#include "rollerBlinds.h"

  void RollerBlinds::goDown() {
    stepper.enableOutputs();
    delay(100);
    stepper.moveTo(posFullDown);
  }

  void RollerBlinds::goUp() {
    stepper.enableOutputs();
    delay(100);
    stepper.moveTo(posFullUp);   
  }
