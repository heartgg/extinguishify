const int FLAME_PIN = 2;
const int RELAY_PIN = 3;

void setup() {
  pinMode(FLAME_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(FLAME_PIN));
  if (digitalRead(FLAME_PIN) == 1) {
    delay(5000);
    sendSound();
  }
  
  delay(1000);
  
}

void sendSound () {
  digitalWrite(RELAY_PIN, HIGH);
  delay(5000);
  digitalWrite(RELAY_PIN, LOW);
}
