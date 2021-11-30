# Distance Measurement Using Arduino & HC-SR04 Ultrasonic Sensor:

* In this project, we are going to interface Ultrasonic sensor HC-SR04 with Arduino and LCD Display.
* The ultrasonic sensor is used to measure the distance.
* It acts as a Sonar.
* It sends an ultrasonic wave of a certain frequency that comes back after hitting the object and calculates the time traveled by it.
* So let’s learn about Distance Measurement Using ATMEGA 328P & HC-SR04 Ultrasonic Sensor.

## COMPONENTS USED:

1. Arduino Uno Board
2. Ultrasonic Sesnor HC-SR04
3. 16*2 LCD Display
4. Breadboard
5. Connecting Wires
6. 5V Power Supply

## HIGH LEVEL REQUIREMENT:

###  HC-SR04 ultrasonic sensor

* The HC-SR04 ultrasonic sensor uses sonar to determine the distance to an object like bats do. It offers excellent non-contact range detection with high accuracy and stable readings in an easy-to-use package.
* From 2cm to 400 cm or 1” to 13 feet. Its operation is not affected by sunlight or black material like sharp rangefinders are (although acoustically soft materials like cloth can be difficult to detect). It comes complete with the ultrasonic transmitter and a receiver module.


1. Minimum measuring range - 2 cm
2. Maximum measuring range : 400 cm or 4 meter
3. Accuracy : 3 mm
4. Operating Voltage : +5V
5. Operating Current : 15mA
6. Working Frequency : 40 KHz
7. Trigger Input signal : 10us pulse
8. Measuring angle : 15 degree

### 16x2 LCD Module

* 16x2 LCD modules are very commonly used in most embedded projects, the reason being its cheap price, availability,  programmer friendly and available educational resources. 

1.Operating Voltage is 4.7V to 5.3V
2.Current consumption is 1mA without backlight
3.Alphanumeric LCD display module, meaning can display alphabets and numbers
4.Consists of two rows and each row can print 16 characters.
5.Each character is build by a 5×8 pixel box
6.Can work on both 8-bit and 4-bit mode
7.It can also display any custom generated characters
8.Available in Green and Blue Backlight


## LOW LEVEL REQUIREMENTS

###  HC-SR04 ultrasonic sensor

1. VCC: +5VDC
2. Trig : Trigger (INPUT)
3. Echo: Echo (OUTPUT)
4. GND: GND


### 16x2 LCD Module


|pno| pin name                  |              pin description
|---|---------------------------|---------------------------------------------------------------------------------------------|
|1  |   Vss (Ground)            |     Ground pin connected to system ground                                                   |
|2  |  Vdd (+5 Volt)            |      Powers the LCD with +5V (4.7V – 5.3V)                                                  |
|3  |  VE (Contrast V)          | Decides the contrast level of display. Grounded to get maximum contrast.                    |
|4  |  Register Select          |    Connected to Microcontroller to shift between command/data register                      |
|5  |   Read/Write              |    Used to read or write data. Normally grounded to write data to LCD                       |
|6  |   Enable                  |    Connected to Microcontroller Pin and toggled between 1 and 0 for data acknowledgement    |
|7  |   Data Pin 0              |                                                                                             |
|8  |    Data Pin 1             |                                                                                             |       
|9  |  Data Pin 2               |                                                                                             |
|10 |   Data Pin 3              |                                                                                             |  
|11 |  Data Pin 4               |                                                                                             | 
|12 |  Data Pin 5               |                                                                                             |
|13 |  Data Pin 6               |                                                                                             |
|14 |  Data Pin 7               |                                                                                             |
|15 |   LED Positive            |Backlight LED pin positive terminal                                                          |
|16 |     LED Negative          |  Backlight LED pin negative terminal                                                        |





