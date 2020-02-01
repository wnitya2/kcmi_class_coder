/* ForLoop
<penulis>
<tanggal>
*/
void setup(){
  Serial.begin(9600);
}
void loop(){
  Serial.println();
  Serial.println("Mulai loop");
  for(int counter = 1; counter <= 6; counter++){
    Serial.println("Hello, world!");
  }
  Serial.println("Loop selesai");
  while(true); //
}
