/*
  Morse Code Blink for "Randal"

  Blink an LED in Morse code to spell out the name "Randal".

  This example code is in the public domain.
*/

// Define the pin connected to the LED
const int LED_PIN = LED_BUILTIN;

// Define the duration of a dot (in milliseconds)
const int DOT_DURATION = 200;

// Define the duration of a dash (in milliseconds)
const int DASH_DURATION = 3 * DOT_DURATION;

// Define the duration of the space between elements of the same letter (in milliseconds)
const int ELEMENT_SPACE_DURATION = DOT_DURATION;

// Define the duration of the space between letters (in milliseconds)
const int LETTER_SPACE_DURATION = 3 * DOT_DURATION;

// Define the Morse code for each letter in the name "Randal"
const int morseR[] = {DOT_DURATION, DASH_DURATION, DOT_DURATION, DOT_DURATION};
const int morseA[] = {DOT_DURATION, DASH_DURATION};
const int morseN[] = {DASH_DURATION, DOT_DURATION};
const int morseD[] = {DASH_DURATION, DOT_DURATION, DOT_DURATION};
const int morseL[] = {DOT_DURATION, DASH_DURATION, DOT_DURATION, DOT_DURATION};
const int morseSpace[] = {0}; // Represents a space between letters

// Function to blink a Morse code pattern
void blinkMorse(const int* pattern) {
  for (int i = 0; pattern[i] != 0; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(pattern[i]);
    digitalWrite(LED_PIN, LOW);
    delay(ELEMENT_SPACE_DURATION);
  }
}

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED_PIN, OUTPUT); // Initialize the LED pin as an output
}

// the loop function runs over and over again forever
void loop() {
  blinkMorse(morseR);
  delay(LETTER_SPACE_DURATION);
  blinkMorse(morseA);
  delay(LETTER_SPACE_DURATION);
  blinkMorse(morseN);
  delay(LETTER_SPACE_DURATION);
  blinkMorse(morseD);
  delay(LETTER_SPACE_DURATION);
  blinkMorse(morseA);
  delay(LETTER_SPACE_DURATION);
  blinkMorse(morseL);
  delay(LETTER_SPACE_DURATION);
  // Add an extra space at the end for clarity
  delay(LETTER_SPACE_DURATION);
}
