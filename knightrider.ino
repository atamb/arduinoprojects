
int ledler[] = {2,3,4,5,6};


void setup() {
  for(int i=0;i<5;i++)
     {
    pinMode (ledler[i], OUTPUT);
     }
}

void loop() {
  for(int i=0; i<5; i++){
    digitalWrite(ledler[i],HIGH);
    delay(300);
    digitalWrite(ledler[i],LOW);
  }
  
  for(int j=4; j>-1; j--){
    digitalWrite(ledler[j],HIGH);
    delay(300);                                                         
    digitalWrite(ledler[j],LOW);
  } 

}
