/* SerialRead
<penulis>
<tanggal>
*/
int inputInteger;
char inputCharacter;
void setup(){
  Serial.begin(9600);
}
void loop(){
  // apakah karakter telah siap dibaca??
  if(Serial.available() > 0){
    // jika iya maka mulai membaca
    inputCharacter = Serial.read();
    Serial.print("Arduino menerima karakter: ");
    Serial.println(inputCharacter);
  }
}
