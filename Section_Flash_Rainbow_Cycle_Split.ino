

void section_flash_rainbow_cycle_split()
{
  int rate = 10;
  int split_value = 5;
  int row = NUM_LEDS / split_value;
  int strobe = 0.5;
  int gap = 40;
  int start_hue;
  int delta_hue = 5;

  start_hue = -1 * millis() / rate;
  for (int i = 0; i < NUM_LEDS / 2; i++)
  {
    leds[i] = CHSV(start_hue, 255, 255);
    leds[NUM_LEDS - 1 - i] = CHSV(start_hue, 255, 255);
    start_hue += delta_hue;
  };
  FastLED.show();
  int rand = random(split_value);
  fill_solid(leds + row * rand, row, CHSV(255, 0, 255));
  hold(strobe);
  start_hue += delta_hue;
  FastLED.show();
  fill_solid(leds + row * rand, row, CHSV(0, 0, 0));
  hold(gap);
  FastLED.show();
}
