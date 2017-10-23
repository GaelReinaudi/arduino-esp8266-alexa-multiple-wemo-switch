#include "AccelStepper.h"

class RollerBlinds
{
  public:
  RollerBlinds(int in1, int in2, int in3, int in4)
    : stepper(AccelStepper::FULL4WIRE, in1,in2,in3,in4)
  {
    stepper.moveTo(posFullUp);
    stepper.setMaxSpeed(1000);
    stepper.setAcceleration(1000);
    Serial.print("Motor created.");
  }

  void loop() {
    //Serial.print(stepper.distanceToGo());
    if (stepper.distanceToGo() == 0) {
      stepper.disableOutputs();
    }
    else {
    }
    stepper.run();
  }

  void goDown();
  void goUp();
  
  private:
    AccelStepper stepper;
    int posFullUp = 0;
    int posFullDown = -35000;
};

