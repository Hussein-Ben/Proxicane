# What is Proxicane?

The Proxicane project is a proof of concept device that can provide low-cost object avoidance for blind/partially sighted people. The Project focuses on using the lower legs of a blind/partially sighted person rather than the hands and arms (which most other projects focus on) thereby freeing the user’s hands and arms for other purposes. The Proxicane project is also intended to replace the cane a blind/partially sighted person typically uses. The entire project including the hardware and software is fully open source.

![A Proxicane unit](https://github.com/Hussein-Ben/Proxicane/blob/master/Project%200.9/FINAL/Developement%20images/20190416_162943_HDR.jpg)

## Instructions for building a Proxicane Unit

 1. Gather parts:
 
 - [ ] 1 x Arduino
 - [ ] 1 x USB cable to connect the Arduino to a PC
 - [ ] 1 x Battery pack with switch (should have two wires connecting to the battery pack)
 - [ ] 1 x Ultrasound sensor
 - [ ] 1 x Cell Vibration motor
 - [ ] 2 x [Optional] male-to-male jumper wires (to extend the length of the vibration motor)
 - [ ] 6 x female-to-male jumper wires
 - [ ] [*Optional*] Duct tape
 - [ ] [*Optional*] Velcro tape


2.  Upload the source code from [here](https://github.com/Hussein-Ben/Proxicane/blob/master/Project%200.9/FINAL/final_code/final_code.ino) onto the Arduino board by connecting the Arduino board to a computer using a USB cable. Download and install the official Arduino IDE from [here](https://www.arduino.cc/en/Main/Software), or the web editor can be used. There is an upload button in IDE. Ensure that the correct COM port is chosen.

3.  Once the code is upload, disconnect the Arduino. Using the female-to-male jumper wires connect wire according to this schematic
![A Proxicane unit schematic](https://github.com/Hussein-Ben/Proxicane/blob/master/Project%200.9/FINAL/final_code/Schematic.png)


4.  Insert a 9v battery into the battery pack and turn the switch on the battery pack. The Proxicane unit should be ready, a place near a wall and the vibration motor should vibrate.

[*Optional*] you can use Duct tape to secure Proxicane and Velcro tape to secure the Proxicane unit to clothing and equipment. You are free to build and design your case for the Proxicane unit.

## More detailed information on the Proxicane Project can be found in this [report](https://github.com/Hussein-Ben/Proxicane/blob/master/Final%20Report/HUSSEIN%20FARKHANI%20Hfark001%20FINAL%20REPORT.pdf) or you can explore this repository. 
