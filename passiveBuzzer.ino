int buzzerPin = 3;
int ledPin = 6;
int buttonOffPin = 7;
int buttonOnPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonOnPin, INPUT_PULLUP);
  pinMode(buttonOffPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonOnPin) == LOW) {
    digitalWrite(ledPin, HIGH);
    // digitalWrite(buzzerPin, HIGH);
    // delay(1);
    // digitalWrite(buzzerPin, LOW);
    // delay(1);

    while (digitalRead(buttonOffPin) != LOW) {
        for (int i = 0; i < 250; i++) {
          digitalWrite(buzzerPin, HIGH);
          delay(1);
          digitalWrite(buzzerPin, LOW);
          delay(1);
        }
        for (int i = 0; i < 125; i++) {
          digitalWrite(buzzerPin, HIGH);
          delay(2);
          digitalWrite(buzzerPin, LOW);
          delay(2);
        }
    }
  } else {
    digitalWrite(ledPin, LOW);
  }
}
