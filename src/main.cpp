#include <Arduino.h>


const int DEFAULT_DELAY = 500;
const int LED_PIN = 2;

// The word "Mississippi" in morse code
String morseCode = "-- .. ... ... .. ... ... .. .--. .--. ..";


//Function for differentiating between dot and dash
void lightUp(char character) {
    if (character == '.') {
        digitalWrite(LED_PIN, HIGH);
        delay(DEFAULT_DELAY);
        digitalWrite(LED_PIN, LOW);
    }
    else if (character == '-') {
        digitalWrite(LED_PIN, HIGH);
        delay(3 *DEFAULT_DELAY);
        digitalWrite(LED_PIN, LOW);  
    }
    //Space between dots and dashes
    delay(DEFAULT_DELAY);
}



//Function to process the word
void sendBlinks(String codeWord) {
    for (int i = 0; i < codeWord.length(); i++ ) {
        char test = codeWord[i];
        if (test == ' ') {
            // Space/Time between letters
            delay(3 * DEFAULT_DELAY);
        }
        else {
            lightUp(test);
        }

    }
    //TIme delay between words
    delay(7 * DEFAULT_DELAY);
}

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    sendBlinks(morseCode);
}
