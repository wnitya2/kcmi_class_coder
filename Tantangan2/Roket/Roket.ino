/*
 * KCMI Class Coder
 * 
 * Part2 - Komunikasi Dengan Arduino
 * 
 * Latihan 1: Memprint roket pada serial monitor
 * 
 */

void setup() {
  Serial.begin(9600);

}

void loop() {
  for (int i = 1; i <= 15; i++) {
    if (i == 1 || i == 13) {
      Serial.println("  /\\");
    } else if (i == 2 || i == 14) {
      Serial.println(" /  \\");
    } else if (i == 3 || i == 15) {
      Serial.println("/    \\");
    } else if (i == 4 || i == 7 || i == 9 || i == 12) {
      Serial.println("+----+");
    } else {
      Serial.println("+    +");
    }
    delay(500);
  }
}
