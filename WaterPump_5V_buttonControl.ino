/* Water pump controlled with a push button

If the button is pressed, then turn on the pump at low speed
Turn off the pump if the button is released.

*/

const int PUMP_PIN   = 9;   
const int BUTTON_PIN = 4;   // button to GND, using the internal pull-up

//change speed if needed
const int PUMP_SPEED = 90;  // min speed = 0 ; max speed = 255
 
void setup() {
  pinMode(PUMP_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  analogWrite(PUMP_PIN, 0);   // pump off at boot
}
 
void loop() {
  bool pressed = (digitalRead(BUTTON_PIN) == LOW);   // LOW = pressed (pull-up)

 if (pressed) {
  analogWrite(PUMP_PIN, PUMP_SPEED);
} else {
  analogWrite(PUMP_PIN, 0);
}

}
