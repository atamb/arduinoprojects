int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;


void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);

}

void loop() {
  int i;

  for(i=0; i<10; i++){
    Number(i);
    delay (750);
    }
}

void Number(int number){
  switch(number) {
    case 0:
        digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,HIGH);
        break;
    
    case 1:
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
        break;

     case 2:
        digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
        digitalWrite(g,LOW);
        break;

     case 3:
        digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,LOW);
        break;
     case 4:
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
        break;
     case 5:
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
        break;
     case 6:
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
        break;
     case 7:
        digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
        break;
     case 8:
        digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
        break;
     case 9:
        digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
        break;
    
  }
}
