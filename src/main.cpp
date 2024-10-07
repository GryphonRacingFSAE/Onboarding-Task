#include <Arduino.h>

const int LED_PIN = 2; // Pin connected to the LED
const int TIME_UNIT = 300; // Default time unit

// Morse code mapping
const String morseCode[] = {
    ".-",   // A
    "-...", // B
    "-.-.", // C
    "-..",  // D
    ".",    // E
    "..-.", // F
    "--.",  // G
    "....", // H
    "..",   // I
    ".---", // J
    "-.-",  // K
    ".-..", // L
    "--",   // M
    "-.",   // N
    "---",  // O
    ".--.", // P
    "--.-", // Q
    ".-.",  // R
    "...",  // S
    "-",    // T
    "..-",  // U
    "...-", // V
    ".--",  // W
    "-..-", // X
    "-.--", // Y
    "--.."  // Z
};

// Function to light up LED based on character in above array
void blinkMorse(char c) {
    if (c >= 'A' && c <= 'Z') {
        String code = morseCode[c - 'A'];
        for (int i = 0; i < code.length(); i++) {
            digitalWrite(LED_PIN, HIGH); // Turn on the LED
            if (code[i] == '.') {
                delay(TIME_UNIT); // Delay only for the amount of time required for a dot
            } else {
                delay(TIME_UNIT * 3); // Delay for dash
            }
            digitalWrite(LED_PIN, LOW); // Turn off the LED
            delay(TIME_UNIT); // Delay for space between dots/dashes
        }
        delay(TIME_UNIT * 3); // Delay for space between letters
    }
}

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    String word = "MISSISSIPPI";
    for (int i = 0; i < word.length(); i++) {
        blinkMorse(word[i]); // Plays depending on character
    }
    digitalWrite(LED_PIN, LOW);
    delay(TIME_UNIT * 7); // Delay for space between words
}
