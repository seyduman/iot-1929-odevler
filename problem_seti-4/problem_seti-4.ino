int ledbacagi = 4;
void setup()
{
  pinMode(A0,INPUT);
  pinMode(3,OUTPUT);
  pinMode(ledbacagi,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int potDeger = analogRead(A0);
  int yeniDeger = map(potDeger,0,1023,0,255);
  if (yeniDeger>=100)
  {
    digitalWrite( ledbacagi, HIGH);
    delay(1000);
  }
  else {
        digitalWrite( ledbacagi, LOW);
        delay(1000);


  }
  Serial.println(yeniDeger);
  delay(10);
  //digitalWrite(3, map(analogRead(A0,0,1023,0,255));
  //Serial.println(map(analogRead(A0,0,1023,0,255));
  //delay(10); 
}
