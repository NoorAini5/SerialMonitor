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
while (!Serial);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available())
{
  int state = Serial.parseInt();
  if (state == 1)
  {
    digitalWrite(13,HIGH);
    Serial.println("LED telah menyala");
  }
    if (state == 2)
  {
    digitalWrite(12,HIGH);
    Serial.println("LED telah menyala");
  }
    if (state == 3)
  {
    digitalWrite(11,HIGH);
    Serial.println("LED telah menyala");
  }
    if (state == 4)
  {
    digitalWrite(10,HIGH);
    Serial.println("LED telah menyala");
  }
    if (state == 5)
  {
    digitalWrite(9,HIGH);
    Serial.println("LED telah menyala");
  }
    if (state == 6)
  {
    digitalWrite(8,HIGH);
    Serial.println("LED telah menyala");
  }
    if (state == 7)
  {
    digitalWrite(7,HIGH);
    Serial.println("LED telah menyala");
  }
    if (state == 8)
  {
    digitalWrite(6,HIGH);
    Serial.println("LED telah menyala");
  }
  delay (100);
}
}
