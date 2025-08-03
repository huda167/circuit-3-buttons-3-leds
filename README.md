# circuit-3-buttons-3-leds
Simple 3-Button LED Control System
Project Overview
This project demonstrates how to control three LEDs using three push buttons with an Arduino Uno. Each button is assigned to one LED. When a button is pressed, the corresponding LED turns ON, and when released, it turns OFF.
This setup is ideal for beginners learning about:

Reading digital input from buttons
Writing digital output to control LEDs
Using internal pull-up resistors on input pins
Components Required
Arduino Uno
3 push buttons
3 LEDs
3 × 220Ω resistors (optional, for LED protection)
Breadboard and jumper wires
Circuit Description
Button 1 is connected to digital pin 11
Button 2 is connected to digital pin 12
Button 3 is connected to digital pin 13
LED 1 is connected to pin 2
LED 2 is connected to pin 3
LED 3 is connected to pin 4
The buttons use the Arduino's internal pull-up resistors, so no external pull-up or pull-down resistors are needed.

Arduino Code

const int button1 = 11;
const int button2 = 12;
const int button3 = 13;

const int led1 = 2;
const int led2 = 3;
const int led3 = 4;

void setup()
{
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  int button1State = digitalRead(button1);
  int button2State = digitalRead(button2);
  int button3State = digitalRead(button3);
  
  if (button1State == LOW)
    digitalWrite(led1, HIGH);
  else
    digitalWrite(led1, LOW);
  
  if (button2State == LOW)
    digitalWrite(led2, HIGH);
  else
    digitalWrite(led2, LOW);
    
  if (button3State == LOW)
    digitalWrite(led3, HIGH);
  else
    digitalWrite(led3, LOW);
}
