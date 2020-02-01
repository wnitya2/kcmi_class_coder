/* 
 *  KCMI class coder
 *  Part 3: Variable dan String
 */

String str1=  "Dia sangat ketakutan dengan ";
String str2 = "Saya tidak tau mengapa dia takut dengan ";
String sentence;
void setup() {
  Serial.begin(9600);
  
  String animal = "kucing";
  sentence = str1 + " " + animal;
  sentence = sentence + "\n" + str2 + " " + animal;

  Serial.print(sentence);

}

void loop() {
  // put your main code here, to run repeatedly:

}
