// Water Pump + MOSFET + Arduino Uno

const int PUMP_PIN = 9;

void setup() {
  pinMode(PUMP_PIN, OUTPUT);
  digitalWrite(PUMP_PIN, LOW);  // pump off at boot
}

void loop() {
  digitalWrite(PUMP_PIN, HIGH); // pump on
  delay(5000); 

  digitalWrite(PUMP_PIN, LOW);  // pump off
  delay(5000);
}

// Speed control instead of on/off:
// analogWrite(PUMP_PIN, 180);  // 0-255, ~70% speed
