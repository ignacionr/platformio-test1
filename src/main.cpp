#include "Arduino.h"

#ifndef LED_BUILTIN
#define LED_BUILTIN 2  // GPIO 2 (D4) is the onboard LED for WeMos D1 mini
#endif

extern "C" void setup()
{
  // initialize the onboard LED as an output
  pinMode(LED_BUILTIN, OUTPUT);

  // start the UART serial communication
  Serial.begin(9600);
  // wait for the serial port to initialize (especially helpful for monitors)
  delay(100);
}

extern "C" void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);

  // print a message to the UART
  Serial.println("LED is ON");

  // wait for a second
  delay(1000);

  // turn the LED off (LOW is the voltage level)
  digitalWrite(LED_BUILTIN, LOW);

  // print a message to the UART
  Serial.println("LED is OFF");

  // wait for a second
  delay(1000);
}
