void setup() {
  // put your setup code here, to run once:
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (0, OUTPUT);
  pinMode (1, OUTPUT);
  pinMode (2, OUTPUT);


}
void single (){
  int pins[] = {13, 12, 11, 9, 7, 0, 1, 2};
  for (int count  = 0; count <8; count++){
     digitalWrite (pins[count], HIGH);
     delay (100);
     digitalWrite (pins[count], LOW);
  }
 
}
//void onetwo (){
  
//}
void all () {
  int myPins[] = {13, 12, 11, 9, 7, 0, 1, 2};
  for (int count  = 0; count <8; count++){
     digitalWrite (myPins[count], HIGH);
  }
}
void off () {
  int pin2[] = {13, 12, 11, 9, 7, 0, 1, 2};
    for (int count  = 0; count <8; count++){
     digitalWrite (pin2[count], LOW);
  }

 }
void loop() {
  // put your main code here, to run repeatedly:
 single ();
 delay (100);
 all ();
 delay (300);
 off ();
}


