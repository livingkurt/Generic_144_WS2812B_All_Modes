// Pattern 5
#define STROBE_5 0.5
#define GAP_5 0

void sparkle_rainbow()
{
  Serial.println("pattern_5");
  for (int i = 0; i < NUM_LEDS; i++)
  {
    for (int i = 0; i < 10; i++)
    {
      leds[random(NUM_LEDS)] = CHSV(random(0, 255), 255, random(0, 255)); // Change To Random LED and change color to White
      delay(STROBE_5);
      FastLED.show();
    }
    fill_solid(leds, NUM_LEDS, CHSV(0, 0, 0)); // Set all to Off.
    FastLED.show();
    delay(GAP_5);
  }
}