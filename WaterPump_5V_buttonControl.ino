const int PUMP_PIN   = 9;   /
const int BUTTON_PIN = 4;   // button to GND, using the internal pull-up
const int PUMP_SPEED = 90; 
bool pumpOn = false;

int lastButtonState = HIGH;      // HIGH = not pressed (pull-up)
int buttonState      = HIGH;
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 50;   // ms — filters mechanical switch bounce

void setup() {
  pinMode(PUMP_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  analogWrite(PUMP_PIN, 0);   // pump off at boot

  buttonState = digitalRead(BUTTON_PIN);
}

void loop() {
  int reading = digitalRead(BUTTON_PIN);

  // reset the debounce timer whenever the raw reading changes
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  // once the reading has been stable for debounceDelay, treat it as real
  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;

      if (buttonState == LOW) {   // button was just pressed
        pumpOn = !pumpOn;
        analogWrite(PUMP_PIN, pumpOn ? PUMP_SPEED : 0);
      }
    }
  }

  lastButtonState = reading;
}
