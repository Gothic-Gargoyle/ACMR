#include <Arduino.h>

#include <LayoutDriver/LayoutDriver.h>
#include <SwitchBoxes/SwitchPair.h>
#include <MotorControl/Motordriver.h>

LayoutDriver layoutDriver;

void setup() {
Serial.begin(9600);
Serial.print("ACMR v1.0");
}

void loop() {
layoutDriver.run();
}


