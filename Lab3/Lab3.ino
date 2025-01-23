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
  pinMode(A6, INPUT);
  int lightlevel = analogRead(A6);
  Serial.begin(9600);
  Serial.println(lightlevel);
  if(lightlevel < 100){
    Serial.println("It’s really dark!");
  }
  else if(lightlevel <200){
    Serial.println("It’s dim in here");
  }
  else if(lightlevel <700){
    Serial.println("It’s a little bright");
  }
  else if (lightlevel <1000){
    Serial.println("It’s really bright!”");
  }
  Serial.println("hello world"); //My serial monitor did not have any inputs unless I printed this line ??
}


// the loop function runs over and over again forever
void loop() {
                    // wait for a second
}
