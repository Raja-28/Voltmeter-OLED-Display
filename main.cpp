#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const int voltagePin = A0;

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("Voltmeter");
  display.display();
  delay(2000);
}

void loop() {
  int sensorValue = analogRead(voltagePin);
  float voltage = (sensorValue * 5.0) / 1023.0;
  
  display.clearDisplay();
  display.setCursor(0, 0);
  display.setTextSize(2);
  display.print("Voltage:");
  display.setCursor(0, 30);
  display.setTextSize(3);
  display.print(voltage);
  display.print(" V");
  
  display.display();
  delay(500);
}
