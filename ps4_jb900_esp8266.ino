#include <ESP8266WiFi.h>
#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>

const char* WIFISSID = "ESP8266 PS4 9.00 jailbreak";

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, HIGH);

    Serial.begin(115200);
    delay(500);

    Serial.println("\n\n");

    Serial.println(WIFISSID);

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

    server.begin();

    Serial.printf("\n\n1. Connect your PS4 to '%s' WiFi access point.\n", WIFISSID);
    Serial.printf("2. Browse to '%s' to jailbreak your PS4.", WiFi.softAPIP().toString());
    Serial.println();

    digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
    delay(10);
}
