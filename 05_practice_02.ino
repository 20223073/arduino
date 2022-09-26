//20223073 만다흐자야

#define PIN_LED 7
int blinkTime1 = 1000;
int blinkTime2 = 200;

void setup()
{
  pinMode(PIN_LED, OUTPUT);
  blinks1(1, blinkTime1);
  blinks2(5, blinkTime2);
}

void loop() {}

void blinks1(int repeats, int time)
{
  for (int i = 0; i < repeats; i++)
  {
    digitalWrite(PIN_LED, 0);
    delay(time);
    digitalWrite(PIN_LED, 1);
    delay(time);
  }
}

void blinks2(int repeats, int time)
{
  for (int i = 0; i < repeats; i++)
  {
    digitalWrite(PIN_LED, 0);
    delay(time);
    digitalWrite(PIN_LED, 1);
    delay(time);
  }
}
