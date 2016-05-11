#define RED 3
#define YELLOW 6
#define BUTTON 2
#define SLEEP 30

void setup() {
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON) == LOW) {
    wink(RED);
  } else {
    wink(YELLOW);
  }
}

void wink(int pin) {
  digitalWrite(pin, HIGH);
  delay(SLEEP);
  digitalWrite(pin, LOW);
  delay(SLEEP);
}


