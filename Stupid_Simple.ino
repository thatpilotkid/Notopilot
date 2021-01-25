#define directionPin 2 //Define direction pin
#define stepPin 3 //Define step pin, to move a step, send a high.

void setup() {
  pinMode(directionPin, OUTPUT); //Define pinmodes
  pinMode(stepPin, OUTPUT); //Define pinmodes
  digitalWrite(directionPin, HIGH); //Send a high to the direction pin to force clockwise
}

void loop() {
  digitalWrite(stepPin, HIGH);
  delay(500);
  digitalWrite(stepPin, LOW);
  delay(500);
}
