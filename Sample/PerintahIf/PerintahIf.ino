void setup() {
  // pin 13 sebagai output
  pinMode(13, OUTPUT);
}

// awal time delay 1000 | 1 detik
int timeDelay = 1000;
int pinLED = 13;
void loop() {
  // Setiap looping, nilai timeDelay dikurangi 100
  timeDelay = timeDelay - 100;
  
  /* Jika timeDelay bernilai 0 atau negatif
  maka nilai timeDelay direset ke 1000*/
  if(timeDelay <= 0){
    timeDelay = 1000;
  }

  //Nyalakan dan matikan LED selama timeDelay
  digitalWrite(pinLED, HIGH);
  delay(timeDelay);
  digitalWrite(pinLED, LOW);
  delay(timeDelay);
}
