#include "AccelStepper.h"

class RollerBlinds
{
  public:
  RollerBlinds(int in1, int in2, int in3, int in4)
    : stepper(AccelStepper::FULL4WIRE, in1,in2,in3,in4)
  {
    stepper.moveTo(posTop);
    stepper.setMaxSpeed(600);
    stepper.setAcceleration(1000);
    Serial.print("Motor created.");
  }

  void loop() {
    //Serial.print(stepper.distanceToGo());
    if (stepper.distanceToGo() == 0) {
      delay(100);
      stepper.disableOutputs();
    }
    else {
    }
    stepper.run();
  }

  void moveToTop();
  void moveToBot();
  void alreadyDown();
  
  private:
    AccelStepper stepper;
    int posBot = 35000;
    int posTop = 0;
};

