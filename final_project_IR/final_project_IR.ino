#include <LiquidCrystal.h>

#define doorIN_sensor A0
#define doorOUT_sensor  A1
int led_red_pin = 13;
int led_green_pin = 12;


#define relay 2
int count = 0;


LiquidCrystal lcd(8, 7, 6, 5, 4, 3);


void IN() {

  count++;
  lcd.clear();
  lcd.print("Person In Room:");
  lcd.setCursor(0, 1);
  lcd.print(count);
  digitalWrite(led_green_pin, HIGH);
  delay(500);
  digitalWrite(led_green_pin, LOW);

  delay(1000);

}

void OUT() {
  count--;
  lcd.clear();
  lcd.print("Person In Room:");
  lcd.setCursor(0, 1);
  lcd.print(count);
  digitalWrite(led_red_pin, HIGH);
  delay(500);
  digitalWrite(led_red_pin, LOW);

  delay(1000);


}





void setup()
{

  lcd.begin(16, 2);
  pinMode(doorIN_sensor, INPUT); // Set the human infraredinterface as the input state
  pinMode(doorOUT_sensor, INPUT); // Set the human infraredinterface as the input state
  pinMode(relay, OUTPUT);
  pinMode(led_red_pin, OUTPUT);
  pinMode(led_green_pin, OUTPUT);
  pinMode(led_green_pin, OUTPUT);

  Serial.begin(9600);
  lcd.setCursor(2, 0);
  lcd.print("Smart DETECTOR");
  lcd.setCursor(0, 1);
  lcd.print("Count: ");
  lcd.print(count);
  Serial.flush();
  Serial.println("Initialized");
  delay(1000);
  lcd.clear();

}
void loop()
{
  //int val = digitalRead(doorIN_sensor); // Define parameters to storethe state read by the human infrared sensor

  if (digitalRead(doorIN_sensor))
    IN();
  if (digitalRead(doorOUT_sensor))
    OUT();

  if (count <= 0)
  {
    lcd.clear();
    digitalWrite(relay, LOW);
    lcd.clear();
    lcd.print("Nobody In Room");
    lcd.setCursor(0, 1);
    lcd.print("Light Is Off");

    delay(1000);
  }
  else {
    digitalWrite(relay, HIGH);

    delay(1000);
  }


}
