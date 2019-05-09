#define AA 2
#define AB 3
#define AC 4
#define AD 5

#define A0 digitalWrite(AA, HIGH); digitalWrite(AB, HIGH); digitalWrite(AC, HIGH); digitalWrite(AD, HIGH);
#define A1 digitalWrite(AA, LOW); digitalWrite(AB, HIGH); digitalWrite(AC, LOW); digitalWrite(AD, HIGH);
#define A2 digitalWrite(AA, HIGH); digitalWrite(AB, LOW); digitalWrite(AC, HIGH); digitalWrite(AD, LOW);

#define BA 6
#define BB 7
#define BC 8
#define BD 9

#define B0 digitalWrite(BA, HIGH); digitalWrite(BB, HIGH); digitalWrite(BC, HIGH); digitalWrite(BD, HIGH);
#define B1 digitalWrite(BA, LOW); digitalWrite(BB, HIGH); digitalWrite(BC, LOW); digitalWrite(BD, HIGH);
#define B2 digitalWrite(BA, HIGH); digitalWrite(BB, LOW); digitalWrite(BC, HIGH); digitalWrite(BD, LOW);

#define D 2

void setup() {
  pinMode(AA, OUTPUT);
  pinMode(AB, OUTPUT);
  pinMode(AC, OUTPUT);
  pinMode(AD, OUTPUT);
  
  pinMode(BA, OUTPUT);
  pinMode(BB, OUTPUT);
  pinMode(BC, OUTPUT);
  pinMode(BD, OUTPUT);
  A0;
  B0;
}
void loop() {
  for(int i = 0; i < 60; i++){
    //A1; B1; delay(D);
    A1; B0; delay(D);
    //A1; B2; delay(D);
    A0; B2; delay(D);
    //A2; B2; delay(D);
    A2; B0; delay(D);
    //A2; B1; delay(D);
    A0; B1; delay(D);
  }
  for(int i = 0; i < 60; i++){
    A0; B1; delay(D);
    //A2; B1; delay(D);
    A2; B0; delay(D);
    //A2; B2; delay(D);
    A0; B2; delay(D);
    //A1; B2; delay(D);
    A1; B0; delay(D);
    //A1; B1; delay(D);
  }
    delay(D);
}
