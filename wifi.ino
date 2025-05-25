#include <WiFi.h>

const char* ssid = "MyESP32_Hotspot";
const char* password = "12345678";  // Must be 8 characters or more

void setup() {
  Serial.begin(115200);
  delay(1000);
  
  // Start the Access Point
  WiFi.softAP(ssid, password);

  IPAddress IP = WiFi.softAPIP();
 
}

void loop() {
  // Nothing needed here for basic hotspot
}
