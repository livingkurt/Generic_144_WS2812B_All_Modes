

void sparkle_white()
{
  int strobe = 0.5;
  int gap = 1;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    for (int i = 0; i < 10; i++)
    {
      leds[random(NUM_LEDS)] = CHSV(255, 0, random(0, 255)); // Change To Random LED and change color to White
      hold(strobe);
      FastLED.show();
    }
    fill_solid(leds, NUM_LEDS, CHSV(0, 0, 0)); // Set all to Off.
    FastLED.show();
    hold(gap);
  }
}