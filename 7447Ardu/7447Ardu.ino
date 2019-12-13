/* 7447Arduino
 * Author: S1m0n5
 * Date: 13/Dec/2019
 * Version: 0.1
 * www.github.com/S1m0n5/7447Arduino
*/

/* Default Pinout 

 [D] 3 @ A (IC)
 [D] 4 @ B (IC)
 [D] 5 @ C (IC)
 [D] 6 @ D (IC)

*/

//Declaring variabiles
//Soon in readme the schematics
int Ap = 3;
int Bp = 4;
int Cp = 5;
int Dp = 6;


void setup() {
  //Declaring pin as output
  pinMode(Ap, OUTPUT);
  pinMode(Bp, OUTPUT);
  pinMode(Cp, OUTPUT);
  pinMode(Dp, OUTPUT);
}

void loop() {
//test, write on the display a sequence from 0 to 9
for(int i = 0; i <= 9; i++){
  segWrite(i);
  delay(500);
}
  
}



void segWrite(int n){
  ///Decimal-Binary Conversion Function

  //Turns off all LEDs
  digitalWrite(Dp, LOW);
  digitalWrite(Cp, LOW);
  digitalWrite(Bp, LOW);
  digitalWrite(Ap, LOW);

  ///Decimal Conversion
  ///Can be optimized :)
  if(n >= 8){
    digitalWrite(Dp, HIGH);
    n = n - 8 ;
  }
  if(n >= 4){
    digitalWrite(Cp, HIGH);
    n = n - 4;
  }
  if(n>=2){
    digitalWrite(Bp, HIGH);
    n = n - 2;
  }
  if(n>=1){
    digitalWrite(Ap, HIGH);
    n = n - 1;
}}
