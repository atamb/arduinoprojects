const int ptinput = A1; 
int ptvalue = 0;
float voltage = 0;



void setup() {
  Serial.begin(9600);

}

void loop() {
  ptvalue = analogRead(ptinput);
  voltage = (ptvalue / 1023.0 )*5;

  Serial.print("Resistance value: ");
  Serial.println(voltage);
  delay(400);

}
