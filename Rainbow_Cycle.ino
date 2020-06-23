
// Pattern 1
#define RATE_1 20
int start_hue_1;
int delta_hue_1 = 3;

void rainbow_cycle()
{
  Serial.println("pattern_1");
  start_hue_1 = -1 * millis() / RATE_1;
  for (int i = 0; i < NUM_LEDS; i++)

  {
    leds[i] = CHSV(start_hue_1, 255, 255);
    start_hue_1 += delta_hue_1;
  };
  FastLED.show();
}