

void wave_white_split_2()
{
  int rand = random(10);
  int strobe = rand;
  int half = NUM_LEDS / 2;
  for (int i = half; i > 1; i--)
  {
    leds[i] += CHSV(255, 0, 255);
    leds[NUM_LEDS - 1 - i] += CHSV(255, 0, 255);
    hold(strobe);
    // fadeToBlackBy(leds, NUM_LEDS, 50);
    FastLED.show();
  }
  fill_solid(leds, NUM_LEDS, CHSV(0, 0, 0));
  FastLED.show();
}