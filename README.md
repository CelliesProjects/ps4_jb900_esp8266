# ps4_jb900_esp8266
Jailbreak PS4 FW9.00 for ESP8266

This is a local copy of https://github.com/GamerHack/ps4jb900 to jailbreak your PS4 without needing an internet connection.

The files were retrieved at `January 3 2022` at commit [ebdcc62](https://github.com/GamerHack/ps4jb900/tree/ebdcc62f7625b633a740f29d90e1e1c97ee2548a).

Payloads are updated to https://github.com/ChendoChap/pOOBs4/commit/886f4a07d0793ea6ee945ba064c6056e3af0231c

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
5.  Connect the PS4 to the `ESP8266 PS4 9.00 jailbreak` WiFi access point.
5.  Browse to `192.168.4.1` and choose a payload.
6.  Follow the on-screen intructions.

### Credits go to
theflow, ChendoChap, Specter, Znullptr, sleirsgoevy and GamerHack (and a lot of others!)
