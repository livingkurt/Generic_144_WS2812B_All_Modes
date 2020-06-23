#define STROBE_9 20
#define GAP_9 10

void all_fade()
{
  Serial.println("pattern_9");
  for (int i = 50; i < 150; i++)
  {
    fill_solid(leds, NUM_LEDS, CHSV(0, 0, i)); // Set all to Off.
    delay(STROBE_9);
    FastLED.show();
  }

  for (int i = 150; i > 50; i--)
  {
    fill_solid(leds, NUM_LEDS, CHSV(0, 0, i)); // Set all to Off.
    delay(STROBE_9);
    FastLED.show();
  }
}