#define redPin  9
#define greenPin  10
#define bluePin  11

void setup()
{
 pinMode(redPin, OUTPUT);
 pinMode(greenPin, OUTPUT);
 pinMode(bluePin, OUTPUT);
}

void loop()
{
 setColor(255, 0, 0); //red
 delay(900);
 setColor(0, 255, 0); //green
 delay(900);
 setColor(0, 0, 255); //blue
 delay(900);
 }

void setColor(int red, int green, int blue)

{
 analogWrite(redPin, red);
 analogWrite(greenPin, green);
 analogWrite(bluePin, blue);
} 
