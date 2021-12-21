
#define Button 8
#define Led 10

int buttonsituation = 0;

void setup() {

  pinMode(Button, INPUT);
  pinMode(Led, OUTPUT);

}

void loop() {

 buttonsituation = digitalRead(Button);

 if(buttonsituation==1){

  digitalWrite(Led,HIGH);
 }
 else {
  digitalWrite(Led,LOW);
 }
 
  
}
