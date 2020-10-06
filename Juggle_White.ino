void juggle_white()
{
  fadeToBlackBy(leds, NUM_LEDS, 20);
  int start_hue;
  int delta_hue = 25;
  start_hue = -1 * millis() / 10;
  for (int i = 0; i < 6; i++)
  {
    leds[beatsin16(i + 6, 0, NUM_LEDS - 1)] |= CHSV(255, 0, 255);
    start_hue += delta_hue;
  }
}