#include <ESP8266WiFi.h>
#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>

const char* WIFISSID = "ESP8266 PS4 9.00 jailbreak";

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, HIGH);

    Serial.begin(115200);
    delay(500);

    Serial.println("\n\nESP8266 PS4 9.00 jailbreak");

    if (!SPIFFS.begin()) {
        Serial.println("SPIFFS Init failed. System halted");
        while (true) {
            digitalWrite(LED_BUILTIN, LOW);
            delay(250);
            digitalWrite(LED_BUILTIN, HIGH);
            delay(250);
        }
    }

    WiFi.mode(WIFI_AP);
    WiFi.softAP(WIFISSID);

    static AsyncWebServer server(80);

    server.serveStatic("/", SPIFFS, "/").setDefaultFile("index.html");

    server.onNotFound([]( AsyncWebServerRequest * request) {
        Serial.printf("Not found http://%s%s\n", request->host().c_str(), request->url().c_str());
        request->send(404);
    });

    DefaultHeaders::Instance().addHeader("Access-Control-Allow-Origin", "*");

    server.begin();

    Serial.printf("\n\n1. Connect your PS4 to '%s' WiFi access point.\n", WIFISSID);
    Serial.print("2. Browse to '");
    Serial.print(WiFi.softAPIP().toString());
    Serial.println("' to jailbreak your PS4.");

    digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
    delay(10);
}
