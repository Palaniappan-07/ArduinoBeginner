#include<Servo.h>
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  myservo.write(0);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(15);
  delay(1000);

  myservo.write(30);
  delay(1000);

  myservo.write(45);
  delay(1000);

  myservo.write(60);
  delay(1000);

  myservo.write(75);
  delay(1000);

  myservo.write(90);
  delay(1000);

  myservo.write(75);
  delay(1000);

  myservo.write(60);
  delay(1000);

  myservo.write(45);
  delay(1000);

  myservo.write(30);
  delay(1000);

  myservo.write(15);
  delay(1000);

  myservo.write(0);
  delay(1000);

  for(int i=0;i<=180;i++)
  {
    myservo.write(i);
    delay(10);
  }

  for(int i=180;i>=0;i--)
  {
    myservo.write(i);
    delay(10);
  }
}
