/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);
  digitalWrite(12, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(12, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                   // wait for a second
  digitalWrite(11, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(11, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);
  // digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  // digitalWrite(11, HIGH); 
  // // digitalWrite(12, LOW);
  // delay(10);                      // wait for a second
  // digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
  // digitalWrite(11, LOW);
  // // digitalWrite(12, HIGH); 
  delay(10); 
  for (int i = 0; i < 255; i++) {
    analogWrite(10, i);
    analogWrite(11, i);
    delay(10);
  }
  delay (1000);
  for (int i = 255; i > 0; i--) {
    analogWrite(10, i);
    analogWrite(11, i);
    delay(10);
  }                     
}




const int buttonPin = 2;  // the number of the pushbutton pin
const int ledPin = 11;    // the number of the LED pin
int brightness = 0;  // how bright the LED is
int fadeAmount = 10;  // how many points to fade the LED by

int buttonState = 0;  // variable for reading the pushbutton status


void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);

}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);


  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    // digitalWrite(ledPin, HIGH);
    brightness = brightness + fadeAmount;
    // change the brightness for next time through the loop:
    analogWrite(ledPin, brightness);
  } 
  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    // fadeAmount = -fadeAmount;
    brightness = 0;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);

}
