

void wave_white()
{
  int rand = random(10);
  int strobe = rand;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] += CHSV(255, 0, 255);
    hold(strobe);
    // fadeToBlackBy(leds, NUM_LEDS, 50);
    FastLED.show();
  }
  fill_solid(leds, NUM_LEDS, CHSV(0, 0, 0));
  FastLED.show();
}