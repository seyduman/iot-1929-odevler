#include<Servo.h>
Servo motor;
int aci;
 
void setup() {
 motor.attach(3);
}
 
void loop() {
 
for(int baslangic=0;baslangic<=180;baslangic=baslangic+15){
motor.write(baslangic);
delay(1000);
}
for(int son=180;son>=0;son=son-30){
motor.write(son);
delay(1000);
}
 
}
 
