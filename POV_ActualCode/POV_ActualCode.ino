int timer = 700;    
int U18 = 7;
int State = 0;         
int lastState = 0;     

//Letters or Characters
boolean space[]={0,0,0,0,0}; 
boolean A[]={1,1,1,1,1,0,0,1,0,1,1,1,1,1,1};
boolean B[]={1,1,1,1,1,1,0,1,0,1,1,1,0,1,1};
boolean C[]={1,1,1,1,1,1,0,0,0,1,1,0,0,0,1};
boolean D[]={1,1,1,1,1,1,0,0,0,1,0,1,1,1,0};
boolean E[]={1,1,1,1,1,1,0,1,0,1,1,0,1,0,1};
boolean F[]={1,1,1,1,1,0,0,1,0,1,0,0,1,0,1};
boolean G[]={1,1,1,1,1,1,0,0,0,1,1,0,1,0,1,1,1,1,0,1};
boolean H[]={1,1,1,1,1,0,0,1,0,0,1,1,1,1,1};
boolean I[]={1,0,0,0,1,1,1,1,1,1,1,0,0,0,1};
boolean J[]={1,0,0,0,1,1,1,1,1,1,0,0,0,0,1};
boolean K[]={1,1,1,1,1,0,1,0,1,0,1,0,0,0,1};
boolean L[]={1,1,1,1,1,1,0,0,0,0,1,0,0,0,0};
//boolean M[];
boolean N[]={1,1,1,1,1,0,0,0,1,0,0,0,1,0,0,1,1,1,1,1};
boolean O[]={1,1,1,1,1,1,0,0,0,1,1,1,1,1,1};
boolean P[]={1,1,1,1,1,0,0,1,0,1,0,0,1,1,1};
boolean Q[]={0,0,1,1,1,0,0,1,0,1,1,1,1,1,1,1,0,0,0,0};
boolean R[]={1,1,1,1,1,0,1,1,0,1,1,0,1,1,1};
boolean S[]={1,0,1,1,1,1,0,1,0,1,1,1,1,0,1};
boolean T[]={0,0,0,0,1,1,1,1,1,1,0,0,0,0,1};
boolean U[]={1,1,1,1,1,1,0,0,0,0,1,1,1,1,1};
boolean V[]={0,1,1,1,1,1,1,0,0,0,0,1,1,1,1};
//boolean W[];
boolean X[]={1,1,0,1,1,0,0,1,0,0,1,1,0,1,1};
boolean Y[]={0,0,1,1,1,1,1,1,0,0,0,0,1,1,1};
boolean Z[]={1,1,0,0,1,1,0,1,0,1,1,0,0,1,1};
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
WriteLetter3Width(K);
WriteLetter1Width(space);
WriteLetter3Width(E);
WriteLetter1Width(space);
WriteLetter3Width(V);
WriteLetter1Width(space);
WriteLetter3Width(I);
WriteLetter1Width(space);
WriteLetter4Width(N);
WriteLetter1Width(space);
WriteLetter3Width(S);
WriteLetter1Width(space);
WriteLetter3Width(P);
WriteLetter1Width(space);
WriteLetter3Width(R);
WriteLetter1Width(space);
WriteLetter3Width(O);
WriteLetter1Width(space);
WriteLetter3Width(J);
WriteLetter1Width(space);
WriteLetter2Width(exclamationmark);
WriteLetter1Width(space);}}
lastState = State;
}

void WriteLetter4Width(boolean letter[]){
  m=0;
  // 4 * 5 letter
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
  
