const int ptgiris = A1; 
int ptdegeri = 0;
float gerilim = 0;



void setup() {
  Serial.begin(9600);

}

void loop() {
  ptdegeri = analogRead(ptgiris);
  gerilim = (ptdegeri / 1023.0 )*5;

  Serial.print("Resistance value: ");
  Serial.println(gerilim);
  delay(400);

}
