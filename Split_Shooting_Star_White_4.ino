

void split_shooting_star_white_4()
{
  int strobe = 50;
  int split_value = 4;
  int row = NUM_LEDS / split_value;

  for (int i = 0; i < row; i++)
  {
    // Row 1
    leds[i] = CHSV(255, 0, 255);
    for (int h = 2; h <= split_value - 2; h += 2)
    {
      leds[backwards(row, h, i)] = CHSV(255, 0, 255);
      leds[forwards(row, h, i)] = CHSV(255, 0, 255);
    }
    leds[NUM_LEDS - 1 - i] = CHSV(255, 0, 255);

    FastLED.show();
    hold(strobe);
    fadeToBlackBy(leds, NUM_LEDS, 100);
    FastLED.show();
  };
}