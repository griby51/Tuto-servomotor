#include <Arduino.h>
#include <Servo.h>

Servo servomoteur;


void setup() {
  servomoteur.attach(3);
  servomoteur.write(0);
}

void loop() {
  servomoteur.write(90);
  delay(1000);
  servomoteur.write(0);
  delay(1000);
}
