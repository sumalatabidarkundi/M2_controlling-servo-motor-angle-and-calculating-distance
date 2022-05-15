# controlling servo motor angle and calculating distance

# Description
   
   Controlling the servo motor angle and calculating distance is a embedded system used to control the servo motor which is basically a actuator by using the sensor component and other essentials components of circuital along with the microcontroller unit. And in addition with control unit it is also capable of the calculating the distance or range of that obstacle.


# Identifying Features

 * Calaculating distance using ultrasonic sensor.
 * Controlling the servo motor angle.
 * Provides the motor angle and displaying it on LCD display.
 * Detects the object range in all possible direction.

 # State of art / Research

 *  controlling servo motor angle plays a important role in the calculating the distance and the      
    obstacle. Since the servo motor provides torque and velocity based on the supplied voltage and current. It is very comfortable to identify the range of the obstacle and it is a 360 degree rotating motor and with the help of the ultrasonic sensor it willl be achieved. A sensor also plays vital role in the detecting the objects.

# Abstract

* This embedded project uses the sensors and actuators as a part of component building. The ultrasonic 
  sensors which are capable of the detecting the objects can be further improvised and may include in the designing of a smart parking system which is automated one. And the servo motor which can precisely used in controlling the motor angle must be in the range f the calculated distance.




# High level Requirements

|  Id   |               Description             |  Category |
|-------|---------------------------------------|-----------|
|  HL1  |Detect the object by ultrasonic sensor | Technical |
|  HL2  |controlling the servo motor            | Technical |
|  HL3  |Calculating the distance and range     | Technical |
|  HL4  |Angle of the motor                     | Technical |
|  HL5  |Displaying the distance and angle on LCD|Technical |

# Low level Requirements

|  Id   |               Description             |  Category |
|-------|---------------------------------------|-----------|
|  LL1  |Using the Arduino unit and LCD display | Technical |
|  LL2  |sensor should sense the object in all possible directions| Technical |
|  LL3  |Sending and recieving the ultrasonic waves| Technical |
|  LL4  |possible angle calculation | Technical |
|  LL5  |Displaying the distance and angle on LCD|Technical |
|  LL6  |Simulation of the components| Technical|

# Applications 

 * calculating the object distance.
 * Servo motor is remote-controlled.
 * Ultrasonic sensors can detect objects automatically.
 * distance will be displayed on LCD. 

# SWOT Analysis
 
 ## Strengths
    
 * Can detect the object easily.
 * Accurate display of distance and motor angle.
 * Can regulate the voltage.

 ## weakeness

 * No buzzer or alaram after completing the detection and calculating distance.

 ## opportunities

 * A usefull invention in automation detection of objects.
 * use of sensors and actuators.

 ## Threats 

 * Misprint of calculated distance.

# 4W's and 1H's


 ## 1. What

 * It is a automated embedded system project to calculate the distance and motor angle.

 ## 2. When

 * In the detection of the objects in automated smart parking and in the autopilot mode of car it can be 
   used.

 ## 3. where

 * Automation industries like car toy etc.
 * smart parking.
 * precautions in preventing accidents

 ## 4. Who

 * It is mostly used when automation is required instead of the manual.

 ## 5. How

  * Since sensor is known for the detecting the object and can caliberly say the distance of object.


  
## Behavioural_diagram

![11](https://user-images.githubusercontent.com/82749120/155835163-da52c509-a25a-4fee-9e98-af041d66f6be.png)

## structural_diagram

![22](https://user-images.githubusercontent.com/82749120/155835210-a8bfd6ab-feec-4bf6-a044-c4d6632ff52e.png)


## components 

## 1. Arduino UNO Unit

* Arduino is an open-source electronics platform based on easy-to-use hardware and software. Arduino 
  boards are able to read inputs - light on a sensor and turn it into an output - activating a motor, turning display.

## 2. Ultrasonic sensor

* An ultrasonic sensor is a sensor that measures the distance to an object using ultrasonic sound 
  waves.
* It recieves and transmitts the ultrasonic signals.

## 3. Servo motor

*  servomotor  is a rotary actuator or linear actuator that allows for precise control of 
   angular or linear position, velocity and acceleration. 
* It consists of a suitable motor coupled to a sensor for position feedback.

## 4.LCD display

* The LCD (Liquid Crystal Display) is a type of display that uses the liquid crystals for its operation. 
   Here, we will accept the serial input from the computer and upload the sketch to the Arduino. The characters will be displayed on the LCD.

## 5.Potentiometer

* The potentiometer is a device that is used to measure the voltage or electric potential. It provides a 
   variable resistance when the shaft of the device is turned. Here, we will measure the amount of resistance as an analog value produced by the potentiometer.

## 6.Resistors

* limit the amount of current going to certain components in the circuit, such as LEDs and integrated 
  circuits.


## Flow chart 

![33](https://user-images.githubusercontent.com/82749120/155837594-f128e5be-ecaf-43ef-a280-3f4cd17355a2.png)


## Test plan

### High level Test plan

| Test ID | Description| Expected I/P | Expected O/P | Actual O/P | Test type|
|---------|------------|--------------|--------------|------------|----------|
|   HL_1  |Detection of object by ultrasonic sensor|Sensor input| Detect the object| success |Technical|
|   HL_2    | Send and recieve the ultrasonic waves| Execution | Echo pin and trig pin activation| Success|Technical|
|   HL_3  |Calculation of distance| Measurement of the distance| Displayed in LCD display| Success|Technical|
|  HL_4   | Measurment of servo motor angle| Angle of servo motor|Angle displayed in LCD display|success|Technical|
|  HL_ 5  | Activate the components by giving power supply| power input| components activated|Success|Technical


### Low level Test plan

| Test ID | Description| Expected I/P | Expected O/P | Actual O/P | Test type|
|---------|------------|--------------|--------------|------------|----------|
|   LL_1    |Working of ultrasonic sensor| Object in range| Detected| Success | Technical|
|   LL_2    | Servo motor angular movement| Object in range | Detected| Success|Technical|
|   LL_3    |Displaying message| LCD display| Distance and Angle| Successs| Technical|
|   LL_4    | Four direction should be sensed by ultrasonic sensor| Execution| Detection |Success|Technical|
|   LL_5    | Calculation of Distance| Execution| Duration*0.034| Success|Technical|

## Circuit connection is Enabled
![circuit_1](https://user-images.githubusercontent.com/82749120/157224724-79eabbc7-07ac-4e69-bc2c-0b9d694dad17.png)

## Working of servo motor(Actuator)

![servo-activation](https://user-images.githubusercontent.com/82749120/157225096-1857c00e-8c5d-4cef-91bd-f413128fb9a5.png)


## Working of sensors 
### 1.Ultrasonic Sensor(Digital Sensor)
### 2.Potentiometer (Analog Sensor)

![ultrasnic](https://user-images.githubusercontent.com/82749120/157225301-e88213a1-6ab7-486f-aeb8-35f0f418b888.png)


## Calculating Distance 
## Measuring Angle

![cal](https://user-images.githubusercontent.com/82749120/157225515-e1d2136a-25ae-4a4f-98c4-4ce5d4a4b6fa.png)
