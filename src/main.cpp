// Library's
#include <Arduino.h>

// Constants
#define TU 300
#define PIN 2

// Pins & Setup
void setup() {
    Serial.begin(9600);
    pinMode(PIN, OUTPUT);
}

// Symbol types to beeps
void symb(char dotDash){
    switch (dotDash){
    // Dash code
    case '-':
        digitalWrite(PIN, HIGH);
        printf("Light on");
        delay(TU * 3);
        digitalWrite(PIN, LOW);
        printf("Light off");
        break;

    // Dot code
    case '.': 
        digitalWrite(PIN, HIGH);
        delay(TU);
        digitalWrite(PIN, LOW);
        break;
    }

    delay(TU); // Space between symbols
}

//Converting Letters to coded symbols
void lett(char codedLetter){
    switch (codedLetter){

        // M code
        case 'M':
            symb('-');
            symb('-');
            break;

        // I code
        case 'I': 
            symb('.');
            symb('.');
            break;

        // S code
        case 'S':
            symb('.');
            symb('.');
            symb('.');
            break;

        // P code
        case 'P':
            symb('.');
            symb('-');
            symb('-');
            symb('.');
            break;  
    }

    delay(TU * 3); // Space betweeen letters
}

// Loop
void loop(){
    // Word spelling
    lett ('M');
    lett ('I');
    lett ('S');
    lett ('S');
    lett ('I');
    lett ('S');
    lett ('S');
    lett ('I');
    lett ('P');
    lett ('P');
    lett ('I');
    delay(TU * 7); // Space between words
}