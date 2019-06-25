#include "rollerBlinds.h"

  void RollerBlinds::moveToTop() {
    stepper.enableOutputs();
    delay(100);
    stepper.moveTo(posTop);
  }

  void RollerBlinds::moveToBot() {
    stepper.enableOutputs();
    delay(100);
    stepper.moveTo(posBot);   
  }

  void RollerBlinds::alreadyDown() {
    posTop -= posBot;  
    posBot -= posBot;  
  }
