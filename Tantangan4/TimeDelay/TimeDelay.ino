/**
 * KCMI class coder
 * 
 * Part 6 - Perintah if
 * 
 * Modifikasi program menggunakan perintah if- else dengan ketentuan sebagai berikut
 * - Beri nilai awal int timeDelay = 1000;
 * - Jika timeDelay bernilai lebih kecil sama dengan 0, maka LED akan diam selama 3
 *   detik lalu nilai timeDelay direset ke 1000
 * - Nilai timeDelay dikurangi 100 jika time delay > 100
 * - Nyalakan dan matikan LED selama timeDelay
 * 
 */

void setup() {
  // pin 13 sebagai output
  pinMode(13, OUTPUT);
}

// awal time delay 1000 | 1 detik
int timeDelay = 1000;
int timeDelayOff;
int pinLED = 13;
void loop() {
  timeDelay = timeDelay - 100;  
  
  /* Jika timeDelay bernilai 0 atau negatifmaka LED akan diam selama 3
     detik lalu nilai timeDelay direset ke 1000 */
  if(timeDelay <= 0){
    timeDelayOff = 3000;
    timeDelay = 1000;
  } else {
    timeDelayOff = timeDelay;
  }

  //Nyalakan dan matikan LED selama timeDelay
  digitalWrite(pinLED, HIGH);
  delay(timeDelay);
  digitalWrite(pinLED, LOW);
  delay(timeDelayOff);
}
