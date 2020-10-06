

void wave_rainbow_shooting_star()
{
  int rate = 10;
  int rand = random(10);
  int rand_length = random(NUM_LEDS);
  int strobe = rand;
  int start_hue;
  int delta_hue = 3;
  start_hue = -1 * millis() / rate;
  for (int i = 0; i < rand_length; i++)
  {
    leds[i] += CHSV(start_hue, 255, 255);
    hold(strobe);
    fadeToBlackBy(leds, NUM_LEDS, 100);
    FastLED.show();
    start_hue += delta_hue;
  }
  fill_solid(leds, NUM_LEDS, CHSV(0, 0, 0));
  FastLED.show();
}