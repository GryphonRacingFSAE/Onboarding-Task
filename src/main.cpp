#include <Arduino.h>

const float DEFAULT_DELAY = 500; 
const int LED_PIN = 2; 

String morseCode = "-- .. ... ... .. ... ... .. .--. .--. ..";

void sendMorse(String message); // Function declaration
void lightUp(char character); // Function declaration

void setup() {
    pinMode(LED_PIN, OUTPUT); 
}

void loop() {
    sendMorse(morseCode);
    delay(10000); 
}

void sendMorse(String message) {
    for (char character : message) {
        if (character == '.') {
            lightUp('.'); 
        } else if (character == '-') {
            lightUp('-');
        } else if (character == ' ') {
            delay(3 * DEFAULT_DELAY); 
        }
    }
}

void lightUp(char character) {
    digitalWrite(LED_PIN, HIGH);
    if (character == '.') {
        delay(DEFAULT_DELAY); 
    } else if (character == '-') {
        delay(3 * DEFAULT_DELAY); 
    }
    digitalWrite(LED_PIN, LOW); 
    delay(DEFAULT_DELAY); 
}
