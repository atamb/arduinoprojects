#define redinput 3
#define blueinput 5

//In this project you're asking a question which you know the answer.
//For example you know the capital of USA is Washington DC
//Where is the capital of USA?
//a-)New York
//b-)Los Angeles
//c-)Washington DC
//d-)Chicago


char b;
char c;
char d;


char a='c';//the answer has to write in this blank






void colors(int red, int green, int blue )
{
analogWrite(redinput, red);
analogWrite(blueinput, green);
}

void setup() {
  Serial.begin(9600);
pinMode(redinput, OUTPUT);
pinMode(blueinput, OUTPUT);

}

void loop() {
if(a == c){//Here you should equate the answer with the character 'a'
  colors(0,255,0);//green 
}
 else{
  colors(255,0,0);//red
 }

}
