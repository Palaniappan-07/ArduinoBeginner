int ledpin=10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  char recieveVal;

  if(Serial.available()>0)
  {
    recieveVal=Serial.read();
    if(recieveVal=='1')
    {
      digitalWrite(ledpin,HIGH);
      Serial.println("LED:ON");
    }
    if(recieveVal=='0')
    {
      digitalWrite(ledpin,LOW);
      Serial.println("LED:OFF");
    }
  }
  delay(50);
}
