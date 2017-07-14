void setup() {
  // put your setup code here, to run once:

}

void loop() {
  //let's set up an array for our pattern
  //which pins (LEDs) to turn on in sequence
  int pattern[] = {1,1,4,4,7,7,10};
 

  //loop through the entire pattern
  for (int count = 0; count <7; count ++) {
    //pattern(count) gives me the note in the 
    //pattern that I've counted up to by now
    digitalWrite(pattern[count], HIGH);
    delay(1000);
    digitalWrite(pattern[count], LOW);
    delay(1000);
  }
  //play the first note twice
  for(int count = 0; count <2; count ++) {
    digitalWrite(1, HIGH);
    delay(1000);
    digitalWrite(1, LOW);
    delay(1000);
  }
//play the second note twice
 for(int count = 0; count <2; count ++) {
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(1000);
  }
  //play the third note twice
 for(int count = 0; count <2; count ++) {
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    delay(1000);
  }
  //play the fourth note once
 {
    digitalWrite(10, HIGH);
    delay(1000);
    digitalWrite(10, LOW);
    delay(1000);
  }
}
