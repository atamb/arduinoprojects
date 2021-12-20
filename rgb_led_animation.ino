#define kirmiziPin  9
#define yesilPin  10
#define maviPin  11

void setup()
{
 pinMode(kirmiziPin, OUTPUT);
 pinMode(yesilPin, OUTPUT);
 pinMode(maviPin, OUTPUT);
}

void loop()
{
 renkAyarla(255, 0, 0); //kirmizi
 delay(900);
 renkAyarla(0, 255, 0); //yesil
 delay(900);
 renkAyarla(0, 0, 255); //mavi
 delay(900);
 }

void renkAyarla(int kirmizi, int yesil, int mavi)

{
 analogWrite(kirmiziPin, kirmizi);
 analogWrite(yesilPin, yesil);
 analogWrite(maviPin, mavi);
} 
