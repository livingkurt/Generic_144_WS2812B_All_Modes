// Pattern 2
#define STROBE_2 0.5
#define GAP_2 1

void sparkle_white()
{
  Serial.println("pattern_2");
  for (int i = 0; i < NUM_LEDS; i++)
  {
    for (int i = 0; i < 10; i++)
    {
      leds[random(NUM_LEDS)] = CHSV(255, 0, random(0, 255)); // Change To Random LED and change color to White
      delay(STROBE_2);
      FastLED.show();
    }
    fill_solid(leds, NUM_LEDS, CHSV(0, 0, 0)); // Set all to Off.
    FastLED.show();
    delay(GAP_2);
  }
}