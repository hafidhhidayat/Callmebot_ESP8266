// Example Whatsapp Message
// Github :
// https://github.com/hafidhh
// https://github.com/hafidhh/Callmebot_ESP8266

#include <ESP8266WiFi.h>
#include <Callmebot_ESP8266.h>

const char* ssid = "your_ssid";
const char* password = "your_password";

String phoneNumber = "your_phonenumber";
String apiKey = "your_apiKey";
String messsage = "your_text_message";

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  Serial.println("Connecting");
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());

  // Whatsapp Message
  Whatsapp(phoneNumber, apiKey, messsage);
}

void loop() {
  
}