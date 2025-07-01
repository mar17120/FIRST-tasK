// C++ code
//
 void setup() {
  // initialize the LED pin as an output:
  pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(2, INPUT);
    pinMode(3, INPUT);
    pinMode(4, INPUT);
}
void loop() {
 

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if  (digitalRead (2) == HIGH) {
    // turn LED on:
    digitalWrite(8, HIGH);
  } else {
    // turn LED off:
    digitalWrite(8, LOW);
  }
 
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (digitalRead (3) == HIGH) {
    // turn LED on:
    digitalWrite(9, HIGH);
  } else {
    // turn LED off:
    digitalWrite(9, LOW);
  }

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (digitalRead (4) == HIGH) {
    // turn LED on:
    digitalWrite(10, HIGH);
  } else {
    // turn LED off:
    digitalWrite(10, LOW);
  }
}
