/**
 * @file controllservo.ino
 * @author sumalata Bidarkundi
 * @brief 
 * @version 0.1
 * @date 2022-04-20
 
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <LiquidCrystal.h> //LCDdisplay library
  #include<Servo.h> //Servomotor library
  
  #define echo   2     // defining the echo pin of ultrasonic sensor
  #define trig   3     // defining the trig pin of ultrasonic sensor
  
  float  duration; // time taken by the pulse to return back
  float  distance; // oneway distance travelled by the pulse
  Servo myservo ;
  
  LiquidCrystal lcd(13, 12, 11, 10, 9, 8);//lcd(RS,EN,D4,D5,D6,D7) 
  void setup() {    
    myservo.attach(6); // Servo is connected to Digital pin 6 of uno board 
    pinMode(trig, OUTPUT); 
    pinMode(echo, INPUT);
    Serial.begin(9600);
    lcd.begin(16, 2);  
  }
  
  void loop() {
  
    time_Measurement();
    distance = duration * (0.0343) / 2;   // calculation of the distance
    display_distance();                   // displaying distance
    myservo.write(distance);// Move the servo at an angle equal to the distance
    delay(500);
    lcd.clear();
            
  }
  
  void time_Measurement()
  { //function to measure the time taken by the pulse to return back
    digitalWrite(trig, LOW);   //trig pin
    delayMicroseconds(2);
  
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
  
    duration = pulseIn(echo, HIGH);
  }
  void display_distance()
  { //function to display the distance & ServoAngle on LCD/Serial Monitor  
    lcd.setCursor(0, 0);
    Serial.print("Distance in Cm: ");             // display distance during lCD display
    Serial.print(distance);
    Serial.println();
    lcd.print("Distance: ");
    lcd.print(distance);
    lcd.setCursor(0, 1);
    lcd.print("ServoAngle: ");                    // displaying motor angle
    int ServoAngle = constrain(distance,0,180);
    lcd.print(ServoAngle);
    
   }
