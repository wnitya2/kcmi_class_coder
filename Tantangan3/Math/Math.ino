/* 
 *  KCMI Class Coder
 *  
 *  Part4 - Math
 *  
 *  Buatlah sketch untuk menghitung dan menampilkan luas dan keliling persegi panjang
 *  dengan ukuran l = 27 dan p = 40.
 *  Luas = p x l
 *  Keliling = 2 x (p+l)  
 */
#include <math.h>
int lebar, panjang;

void setup() {
  Serial.begin(9600);
  Serial.println("Menghitung luas dan keliling");
}

void loop() {
  lebar = 27;
  panjang = 40;

  String soal;
  soal = "Diketahui:";
  soal += "\n panjang = ";
  soal += panjang;
  soal += "\n lebar = ";
  soal += lebar;
  
  Serial.println(soal);

  int luas = panjang * lebar;
  int keliling = 2 * (panjang + lebar);
  String hasil = "\nHasil:\n Luas = ";
  hasil += luas;
  hasil += "\n Keliling = ";
  hasil += keliling;
  
  Serial.println(hasil);
  while(true);

}
