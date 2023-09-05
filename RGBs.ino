//Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

int redVal;
int greenVal;
int blueVal;

void loop() {
  #define delayTime 10 //fading time between colors

  redVal = 255;
  greenVal = 0;
  blueVal = 0;

  analogWrite(RED, redVal);
  analogWrite(GREEN, greenVal);
  analogWrite(BLUE, blueVal);

  for (int i = 0; i < 255; i++) {
    redVal -= 1;
    greenVal += 1;

    analogWrite(RED, redVal);
    analogWrite(GREEN, greenVal);
    delay(delayTime);
  }

  for (int i = 0; i < 5; i++) {
    delay(200);
    analogWrite(GREEN, 0);
    delay(200);
    analogWrite(GREEN, 255);
  }
  
  for (int i = 0; i < 255; i++) {
    greenVal -= 1;
    blueVal += 1;

    analogWrite(GREEN, greenVal);
    analogWrite(BLUE, blueVal);
    delay(delayTime);
  }
  
  for (int i = 0; i < 5; i++) {
    delay(200);
    analogWrite(BLUE, 0);
    delay(200);
    analogWrite(BLUE, 255);
  }

  for (int i = 0; i < 255; i++) {
    blueVal -= 1;
    redVal += 1;

    analogWrite(BLUE, blueVal);
    analogWrite(RED, redVal);
    delay(delayTime);
  }
  
  for (int i = 0; i < 5; i++) {
    delay(200);
    analogWrite(RED, 0);
    delay(200);
    analogWrite(RED, 255);
  }
}
