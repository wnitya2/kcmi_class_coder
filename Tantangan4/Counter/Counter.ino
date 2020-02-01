/**
 * KCMI class coder
 * 
 * Part 7 - Loop
 * Buatlah program counter yang menghitung 1-100
 */

void setup() {
  Serial.begin(9600); 

}

void loop() {
  Serial.println("Count 1 - 100:");
  for (int i = 1; i <= 100; i++) {
    Serial.println(i);
  }
  Serial.println("Loop selesai");
  while(true);

}
