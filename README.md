# ACMR
I started this project to be able to control my cupboardn scale model railway layout without
spending tons of cash on vendor-specific transformers and point motors.

## Features:


## To do list:

* Add support for signals (togglebutton maybe?)
* Tie everything together as a functioning unit
* MAYBE switch to a arduino mega since im running out of in/outputs faster than i like.

# DONE:
* Motor driver

# WIRING:
Input Pins:
    Switchboard:A1-5  Button matrix an option? Analog pins can be digital-in->PISO shift register?
    Potmeter: A0

Output Pins:
    Servo's: D0-7 (pwm) pins, if Servo library gets used, pins 9 & 10 are no longer PWM.
    Motor control: 1 PWM pin D11, D12-13 for direction
    (optional) Light Signal: 2? D9-10 (sadly no PWM, F)

Voltage:
12v 3a DC adapter
    * 12v:
        * L298N motordriver via screw terminals

    * Stepdown to 7v DC:
        * 7 servo's @ 250 mA/piece
        * Arduino via barrel jack
All have common ground!