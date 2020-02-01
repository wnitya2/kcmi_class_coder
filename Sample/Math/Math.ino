/*IntegerdanMatematika
by <namamu>
<tanggal>
*/
#include <math.h>
int integerA, integerB, integerC, integerD;
void setup(){
  Serial.begin(9600);
  Serial.println("Siap menerima angka");
}
void loop(){
  integerA = 37;
  integerB = 12;
  String pesan;
  pesan = "Eksplorasi integer. Berikut ini :";
  pesan += "\n integerA = ";
  pesan += integerA;
  pesan += "\n integerB = ";
  pesan += integerB;
  Serial.println(pesan);
  while(true); //agar baris terakhir terus menerus dikerjakan
  
}
