int kirmiziled = 8; 
int sariled = 9; 
int yesilled = 10; 
void setup() {
 
pinMode(kirmiziled, OUTPUT); 
pinMode(sariled, OUTPUT); 
pinMode(yesilled, OUTPUT);  
 
}
 
void loop() {
 
digitalWrite(kirmiziled, HIGH); // kırmızı ledimizi yaktık.
delay(5000); // 5 saniye kırmızı ledimiz yanar (buradaki 1000 degeri milisaniye cinsindendir. 1000milisaniye=1saniye).
digitalWrite(sariled, HIGH); // sarı ledimizi yaktık.
delay(3000); // 3 saniye sarı led yanar.
 digitalWrite(kirmiziled, LOW); // kırmızı ledimizi söndürdük.

digitalWrite(sariled, LOW); // sarı ledimizi söndürdük.
digitalWrite(yesilled, HIGH); // yeşil ledimizi yaktık.
delay(3000); // 3 saniye yesil led yanar.
digitalWrite(sariled, HIGH); // sarı ledimizi yaktık.
delay(3000); // 3 saniye sarı led yanar.  
digitalWrite(yesilled, LOW); // yeşil ledimizi söndürdük.
digitalWrite(sariled, LOW); // sarı ledimizi söndürdük.
 
}
