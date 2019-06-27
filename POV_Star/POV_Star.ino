int timer = 600;    
int U18 = 7;
int State = 0;         
int lastState = 0;       

void setup() {
  for (int Pin = 2; Pin <=6; Pin++) {
    pinMode(Pin, OUTPUT);}
   pinMode(U18, INPUT);
}

void loop() {
  State = digitalRead(U18);
if (State != lastState){
  if (State == HIGH){
  for (int m=0; m<8; m++){ 
  for (int Pin = 2; Pin <=6; Pin++) {
    digitalWrite(Pin, HIGH);
    delayMicroseconds(timer);
    digitalWrite(Pin, LOW);
  }

  for (int Pin = 5; Pin >= 3; Pin--) {
    digitalWrite(Pin, HIGH);
    delayMicroseconds(timer);
    digitalWrite(Pin, LOW);
  }}}}
  lastState = State;
}
