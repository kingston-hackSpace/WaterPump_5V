// Water Pump + MOSFET + Arduino Uno

const int PUMP_PIN = 9;

void setup() {
  pinMode(PUMP_PIN, OUTPUT);
  digitalWrite(PUMP_PIN, LOW);  // pump off at boot
}

void loop() {
// min speed: 0, max speed: 255 
  
  analogWrite(PUMP_PIN, 0);  // pump off 
  delay(3000); 

  analogWrite(PUMP_PIN, 180);  // pump ~70% speed
  delay(3000); 

  analogWrite(PUMP_PIN, 255);  // max speed
  delay(3000); 
}
