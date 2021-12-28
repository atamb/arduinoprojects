#include <dht.h>

#define pin 2

dht DHT;

void setup() {
 Serial.begin(9600);

}

void loop() {
  int readData = DHT.read22(pin);
  float temp = DHT.temperature;
  float hum = DHT.humidity;
  Serial.print("Temperature value:");
  Serial.print(temp);
  Serial.println(" °C");
  Serial.print("Humidity value: %");
  Serial.println(hum);
  
  delay(2000);
}
