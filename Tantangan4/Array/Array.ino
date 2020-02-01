/**
 * KCMI class coder
 * 
 * Part 8: Array
 * Buatlah program yang untuk menghitung 5 bilangan prima pertama dengan
 * menyimpan nilai bilangan prima dalam sebuah array
 */
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("5 Bilangan prima pertama");
  int prime[5];
  int counter = 0;
    
  for (int i = 1; counter < 5; i++) {
    int check = 0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        check++;
      }
    }
    
    if(check == 2) {
      // masuk ke kondisi bilangan prima
      counter += 1;    
      prime[counter - 1] = i;
    }
  }

  Serial.println("Melooping array: ");
  for (int i = 0; i < counter; i++) {
    Serial.println(prime[i]);  
  }
  
  while(true);
}
