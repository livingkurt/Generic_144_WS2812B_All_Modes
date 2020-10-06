

void shooting_star_white()
{
  int strobe = 30;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] += CHSV(255, 0, 255);
    hold(strobe);
    fadeToBlackBy(leds, NUM_LEDS, 50);
    FastLED.show();
  }
}