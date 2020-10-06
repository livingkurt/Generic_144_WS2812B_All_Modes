

void shooting_star_white_end_to_end()
{
  int pos = beatsin16(50, 0, NUM_LEDS);
  leds[pos] = CHSV(255, 0, 255);
  fadeToBlackBy(leds, NUM_LEDS, 30);
  FastLED.show();
}