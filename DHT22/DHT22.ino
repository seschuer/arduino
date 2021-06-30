#include <DHT.h>
#include <DHT_U.h>



#define DHTPIN 7
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  dht.begin();
 

}

void loop() {
  // put your main code here, to run repeatedly:
  
  delay(15000);

  float humi = dht.readHumidity();
  float temp = dht.readTemperature();

  Serial.print("Humidity: ");
  Serial.print(humi);
  Serial.println(" %");
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" Degree Celsius");

}
