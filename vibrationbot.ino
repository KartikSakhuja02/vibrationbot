const int sensorPin = 2;     // Input from vibration sensor
const int outputPin = 3;    // Output to LED or buzzer

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(outputPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);
  
  if (sensorValue == HIGH) {
    digitalWrite(outputPin, HIGH);
    Serial.println("Vibration Detected!");
    delay(500);
  } else {
    digitalWrite(outputPin, LOW);
  }
}
