#define tripPin 3
#define echoPin 4
#define redPin 9
#define greenPin 10
#define bluePin 11


void colors(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

void setup() {
  Serial.begin(9600);
  pinMode(tripPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
 int duration;
 int distance;

 digitalWrite(tripPin, HIGH);
 delayMicroseconds(1000);
 digitalWrite(tripPin, LOW);

 duration = pulseIn(echoPin, HIGH);

 distance=( duration / 58 );
 
  if(distance<25){
  colors(0,255,255);
}
  else if(distance<40){
  colors(255,255,0);
}
  else{
  colors(255,0,255);
}

 Serial.println(distance);
 delay(500);

}
