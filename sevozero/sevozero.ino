#include<Servo.h>
Servo servox;
Servo servoy;
Servo servoz;
Servo servog;

void arm()
{
  servox.write(90);
  servoy.write(90);
  servoz.write(40);
  servog.write(0);
  delay(1000);
}
void setup() {
  // put your setup code here, to run once:
  servox.attach(9);
  servoy.attach(10);
  servoz.attach(11);
  servog.attach(6);
  arm();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  servox.write(60);
  delay(1000);

  servoy.write(60);
  delay(1000);

  servoz.write(75);
  delay(1000);

  servog.write(75);
  delay(1000);
  
  
}
