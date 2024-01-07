const int buzzerPin = 10;
const int flamePin = 12;
int Flame = HIGH;
int redled = 6;
int greenled = 5;
int motorPin = 8;  
void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);
  pinMode(flamePin, INPUT);
  pinMode(motorPin, OUTPUT);
  // pinMode(relayPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  Flame = digitalRead(flamePin);

  if (Flame == LOW) {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(redled, HIGH);
    digitalWrite(greenled, LOW);
    Serial.println("Fire Detected! Water Sprinkler Activated!");
  } else {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(greenled, HIGH);
    digitalWrite(motorPin, LOW); 
    digitalWrite(redled, LOW);
    Serial.println("Fire Not Detected!");
  }
}
