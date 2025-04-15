#include <Servo.h>
#include <LiquidCrystal.h>

const int buttonPin = 2;
const int potPin = A0;
const int servoPinA = 9;
const int servoPinB = 10;

LiquidCrystal lcd(12, 11, 5, 4, 3, 6);

Servo servoA;
Servo servoB;

bool activeServo = 0; 
bool lastButtonState = HIGH;
bool currentButtonState;
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 50;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); 
  servoA.attach(servoPinA);
  servoB.attach(servoPinB);

  lcd.begin(16, 2);
  lcd.clear();
  lcd.print("System Ready");
  delay(1000);
  lcd.clear();
}

void loop() {
  bool reading = digitalRead(buttonPin);
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (lastButtonState == HIGH && reading == LOW) {
      activeServo = !activeServo; 
    }
  }
  lastButtonState = reading;

  
  int potValue = analogRead(potPin);
  int angle = map(potValue, 0, 1023, 0, 180);

  if (activeServo == 0) {
    servoA.write(angle);
  } else {
    servoB.write(angle);
  }

  lcd.setCursor(0, 0);
  lcd.print("Servo: ");
  lcd.print((activeServo == 0) ? "A       " : "B       ");

  lcd.setCursor(0, 1);
  lcd.print("Angle: ");
  lcd.print(angle);
  lcd.print("     "); 

  delay(100); 
}
