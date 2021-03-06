# Jailbreak PS4 FW9.00 for ESP8266

This is a trimmed down copy of [GamerHack/ps4jb900v2](https://github.com/GamerHack/ps4jb900v2) hosted on a ESP8266 to jailbreak your PS4 without needing an internet connection.

### Versions

- 1.0.0 - First release.
- 1.0.1 - Payloads are updated to commit [886f4a0](https://github.com/ChendoChap/pOOBs4/commit/886f4a07d0793ea6ee945ba064c6056e3af0231c) from https://github.com/ChendoChap/pOOBs4
- 1.0.2 - GoldHEN updated to 2.1.1. from https://github.com/GamerHack/ps4jb900v2
- 1.0.3 - GoldHEN updated to 2.2. which includes the [GoldHEN Cheat Menu](https://github.com/GoldHEN/GoldHEN_Cheat_Repository). Cheat codes are not included and have to be downloaded from https://github.com/GoldHEN/GoldHEN_Cheat_Repository.

### You will need

1.  A ESP8266 with at least 8MB flash memory. A suitable board is for example the [WEMOS D1 mini Pro](https://www.wemos.cc/en/latest/d1/d1_mini_pro.html ).
2.  Arduino IDE, capable of compiling [ESP8266 nonos](https://github.com/esp8266/Arduino) sketches and the [arduino-esp8266fs-plugin](https://github.com/esp8266/arduino-esp8266fs-plugin/releases) installed on your system.
3.  The magic USB stick flashed with `exfathax.img`.
4.  [ESPAsyncTCP](https://github.com/me-no-dev/ESPAsyncTCP) and [ESPAsyncWebServer](https://github.com/me-no-dev/ESPAsyncWebServer) installed in the Arduino libraries folder.

### How to use

1.  Download and extract the files.
2.  Open `ps4_jb900_esp8266.ino` in the Arduino IDE.
3.  Use `Tools -> ESP8266 Sketch Data Upload` to upload the data files to your esp8266.
4.  Flash the sketch to your ESP8266.
5.  Turn on and connect your PS4 to the `ESP8266 PS4 9.00 jailbreak` WiFi access point.
5.  Browse to `192.168.4.1` and follow the on-screen intructions.

### Credits go to

theflow, ChendoChap, Specter, Znullptr, sleirsgoevy and GamerHack (and a lot of others!)
