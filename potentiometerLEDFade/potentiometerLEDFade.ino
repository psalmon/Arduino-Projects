/*
 Fade
 @author: Paul Salmon
 
 Change the brightness of an LED according to analog input.
 Intended for use on an Arduino Uno.
 Connect a potentiometer input to analog input pin 0, and an LED through a 220 Ohm resistor to digital output pin 9.
 
 This is code influenced by examples on arduino.cc
 
 
 
 This example code is in the public domain.
 */

int led = 9;           // the pin that the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin 9 to be an output:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness of pin 9:
  int sensorValue = (analogRead(A0)/4);
  analogWrite(led, sensorValue);    

  // wait for 30 milliseconds to see the dimming effect    
  delay(30);                            
}

