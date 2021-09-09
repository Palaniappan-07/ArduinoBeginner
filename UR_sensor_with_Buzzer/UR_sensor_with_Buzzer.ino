#define trigpin 12
#define echopin 11
const float sound_speed=0.034;//speed of sound in cm/microseconds
const int max_distance=200;
const int timeout=max_distance*6000;
int buzzpin=6;

float calc_distance()
{
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  float duration=pulseIn(echopin,HIGH,timeout);
  float distance=(duration*sound_speed)/2; 
  return distance;
}
void setup() {
  // put your setup code here, to run once:
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(buzzpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
  Serial.print("Ping: ");
  Serial.print(calc_distance()); 
  Serial.println("cm");
  float dis=calc_distance();
  if (dis<10)
  {
    analogWrite(buzzpin,255-dis);
  }
}
