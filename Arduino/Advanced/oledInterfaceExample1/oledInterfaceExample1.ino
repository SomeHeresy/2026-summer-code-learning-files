#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define DHTPIN 8     // What digital pin the sensor is connected to
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


void setup() {
  //7bit address 0x3C, 8bit address 0x78
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(14, 0);
  display.println("EMCG Control V1.0");
  display.display();

  Serial.begin(9600);
  dht.begin();
}

void loop() {
  //test for data reading and display for later EMCG software display
  //Will include Voltage, charging status, coil failure status, etc

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();   // Celsius

  // check for failure
  if (isnan(humidity) || isnan(temperature)) {
    display.clearDisplay();
    display.setCursor(0, 0);
    display.println("DHT Read Error!");
    display.display();
    delay(2000);
    return;
  }

  display.setCursor(0, 20);
  display.print("Temp: ");
  display.print(temperature);
  display.println(" C");

  display.setCursor(0, 35);
  display.print("Humidity: ");
  display.print(humidity);
  display.println(" %");

  display.display();

  delay(1000);
}
