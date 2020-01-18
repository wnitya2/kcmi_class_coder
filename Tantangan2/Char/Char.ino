/*
 * KCMI Class Coder
 * 
 * Part2 - Komunikasi Dengan Arduino
 * 
 * Latihan 2: Buatlah program yang menampilkan karakter dalam decimal, heksa dan biner
 * 
 */

char myChar;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0) {
    myChar = Serial.read();
    Serial.print("Char: ");
    Serial.println(myChar);
    Serial.print("Dalam Decimal: ");
    Serial.println(myChar, DEC);
    Serial.print("Dalam Hexa: ");
    Serial.println(myChar, HEX);
    Serial.print("Dalam Binary: ");
    Serial.println(myChar, BIN);
    
  }
}
