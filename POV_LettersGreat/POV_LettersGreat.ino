int timer = 700;    
int U18 = 7;
int State = 0;         
int lastState = 0;     


boolean space[]={0,0,0,0,0};   
boolean G[]={1,1,1,1,1,1,0,0,0,1,1,0,1,0,1,1,1,1,0,1};
boolean R[]={1,1,1,1,1,0,1,1,0,1,1,0,1,1,1};
boolean E[]={1,1,1,1,1,1,0,1,0,1,1,0,1,0,1};
boolean A[]={1,1,1,1,1,0,0,1,0,1,1,1,1,1,1};
boolean T[]={0,0,0,0,1,1,1,1,1,1,0,0,0,0,1};
boolean S[]={1,0,1,1,1,1,0,1,0,1,1,1,1,0,1};
boolean C[]={1,1,1,1,1,1,0,0,0,1,1,0,0,0,1};
boolean O[]={1,1,1,1,1,1,0,0,0,1,1,1,1,1,1};
boolean exclamationmark[]={1,0,1,1,1,1,0,1,1,1};
int m;

void setup() {
  for (int Pin = 2; Pin <=6; Pin++) {
    pinMode(Pin, OUTPUT);}
  pinMode(U18, INPUT);
}

void loop() {
State = digitalRead(U18);
if (State != lastState){
  if (State == HIGH){
WriteLetter4Width(G);
WriteLetter1Width(space);
WriteLetter3Width(R);
WriteLetter1Width(space);
WriteLetter3Width(E);
WriteLetter1Width(space);
WriteLetter3Width(A);
WriteLetter1Width(space);
WriteLetter3Width(T);
WriteLetter1Width(space);
WriteLetter3Width(S);
WriteLetter1Width(space);
WriteLetter3Width(C);
WriteLetter1Width(space);
WriteLetter3Width(O);
WriteLetter1Width(space);
WriteLetter3Width(T);
WriteLetter1Width(space);
WriteLetter3Width(T);
WriteLetter1Width(space);
WriteLetter2Width(exclamationmark);
WriteLetter1Width(space);}}
lastState = State;
}

void WriteLetter4Width(boolean letter[]){
  m=0;
  for (int n=0; n<=3; n++){
  for (int Pin = 2; Pin <=6; Pin++) {
    digitalWrite(Pin, letter[m]);
    m=m+1;}
    delayMicroseconds(timer);}}

void WriteLetter3Width(boolean letter[]){
  m=0;
  for (int n=0; n<=2; n++){
  for (int Pin = 2; Pin <=6; Pin++) {
    digitalWrite(Pin, letter[m]);
    m=m+1;}
    delayMicroseconds(timer);}}

 void WriteLetter2Width(boolean letter[]){
  m=0;
  for (int n=0; n<=1; n++){
  for (int Pin = 2; Pin <=6; Pin++) {
    digitalWrite(Pin, letter[m]);
    m=m+1;}
    delayMicroseconds(timer);}}
 
 void WriteLetter1Width(boolean letter[]){
  m=0;
   for (int Pin = 2; Pin <=6; Pin++) {
    digitalWrite(Pin, space[m]);
    m=m+1;}
    delayMicroseconds(timer);}
  
