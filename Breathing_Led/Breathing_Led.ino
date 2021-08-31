int ledpin=10;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int a=0;a<=250;a+=1)
  {
    analogWrite(ledpin,a);
    delay(15);
  }
  for (int a=250;a>=0;a-=1)
  {
    analogWrite(ledpin,a);
    delay(15);
  }

}
