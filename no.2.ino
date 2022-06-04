void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
Serial.begin(9600);
Serial.flush();
}

void loop() {
  // put your main code here, to run repeatedly:
String input = "";
while (Serial.available() > 0)
{
input += (char) Serial.read();
delay(5);
}
if (input == "UP")
{
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(13,HIGH);
  Serial.println("LED menyala");
}
if (input == "DOWN")
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(6,HIGH);
  Serial.println("LED menyala");
}
}
