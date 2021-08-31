int Delay=1000;
int ledpin;

void setup() {
  // put your setup code here, to run once:
  for(ledpin=2;ledpin<=6;ledpin++)
  {
    pinMode(ledpin,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(ledpin=2;ledpin<=6;ledpin++)
  {
    digitalWrite(ledpin,HIGH);
    delay(Delay);
  }
  
  for(ledpin=6;ledpin>=2;ledpin--)
  {
    digitalWrite(ledpin,LOW);
    delay(Delay);
  }
}
