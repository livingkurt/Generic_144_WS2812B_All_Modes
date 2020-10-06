

void shooting_star_rainbow()
{
  int strobe = 30;
  int rate = 10;
  int start_hue;
  int delta_hue = 5;
  start_hue = -1 * millis() / rate;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] += CHSV(start_hue, 255, 255);
    hold(strobe);
    fadeToBlackBy(leds, NUM_LEDS, 50);
    FastLED.show();
    start_hue += delta_hue;
  }
}