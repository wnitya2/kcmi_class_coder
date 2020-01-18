/*
  KCMI Class Coder

  Arduino Part 1: Mengenal Arduino

  Latihan 1: 
  Modifikasi sketch blink sehingga led menyala blink dengan interval 0.5 sekon
  Jika sukses maka led akan blink lebih cepat dari sebelumnya
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for 0.5 second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for 0.5 second
}
