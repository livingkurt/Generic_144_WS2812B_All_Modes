void section_flash()
{
  int rate = 10;
  int split_value = 4;
  int row = NUM_LEDS / split_value;
  int start_hue;
  int delta_hue = 10;

  start_hue = -1 * millis() / rate;
  // fill_solid(leds, NUM_LEDS, CHSV(start_hue, 255, 200)); // Set all to red.
  // FastLED.show();

  // int rand = random(split_value);
  fill_solid(leds, row, CHSV(255, 0, 255));
  FastLED.show();
  hold(100);
  fill_solid(leds, row, CHSV(0, 0, 0));
  FastLED.show();
  hold(100);
  fill_solid(leds + row * 3, row, CHSV(255, 0, 255));
  FastLED.show();
  hold(100);
  fill_solid(leds + row * 3, row, CHSV(0, 0, 0));
  FastLED.show();
  hold(100);
  fill_solid(leds + row, row, CHSV(255, 0, 255));
  FastLED.show();
  hold(100);
  fill_solid(leds + row, row, CHSV(0, 0, 0));
  FastLED.show();
  hold(100);
  fill_solid(leds + row * 2, row, CHSV(255, 0, 255));
  FastLED.show();
  hold(100);
  fill_solid(leds + row * 2, row, CHSV(0, 0, 0));
  FastLED.show();

  // hold(100);
  //   for (int i = 0; i < split_value; i++)
  // {
  //   leds[NUM_LEDS - i - 1] = leds[i];
  // }
  // for (int i = 0; i < split_value; i++)
  // {

  // fill_solid(leds + row * rand, row, CHSV(255, 0, beatsin16(100, 50, 255)));
  // FastLED.show();
  // hold(100);

  // fill_solid(leds + row * rand, row, CHSV(0, 0, 0));
  // FastLED.show();
  // hold(100);
  // }

  // fill_solid(leds + row, row, CHSV(255, 0, 255));
  // FastLED.show();
  // hold(20);
  // fill_solid(leds + row, row, CHSV(0, 0, 0));
  // FastLED.show();
  // hold(20);
  // fill_solid(leds + row * 2, row * 2, CHSV(255, 0, 255));
  // FastLED.show();
  // hold(20);
  // fill_solid(leds + row * 2, row * 2, CHSV(0, 0, 0));
  // FastLED.show();
  // hold(20);
  // fill_solid(leds + row * 3, row * 3, CHSV(255, 0, 255));
  // FastLED.show();
  // hold(20);
  // fill_solid(leds + row * 3, row * 3, CHSV(0, 0, 0));
  // FastLED.show();
  // hold(20);
  // fill_solid(leds + row * 2, row * 2, CHSV(255, 0, 255));
  // FastLED.show();
  // fill_solid(leds + row, row, CHSV(0, 0, 0));
  // FastLED.show();
  // for (int i = 0; i < row; i++)
  // {
  //   leds[NUM_LEDS - i - 1] = leds[i];
  // }
  // FastLED.show();
  // hold(20);
  // fill_solid(leds, NUM_LEDS, CHSV(0, 0, 0)); // Set all to red.
  // FastLED.show();
  // hold(20);
  // for (int i = row; i < row * 2; i++)
  // {
  //   leds[NUM_LEDS - i - 1] = leds[i];
  // }
  // FastLED.show();
  // hold(20);
  // fill_solid(leds, NUM_LEDS, CHSV(0, 0, 0)); // Set all to red.
  // FastLED.show();
  // hold(20);
  // for (int i = row * 2; i < row * 3; i++)
  // {
  //   leds[NUM_LEDS - i - 1] = leds[i];
  // }
  // FastLED.show();
  // hold(20);
  // fill_solid(leds, NUM_LEDS, CHSV(0, 0, 0)); // Set all to red.
  // FastLED.show();
  // hold(20);
  // for (int i = row * 3; i < row * 5; i++)
  // {
  //   leds[NUM_LEDS - i - 1] = leds[i];
  // }
  // FastLED.show();
  // hold(20);
  // fill_solid(leds, NUM_LEDS, CHSV(0, 0, 0)); // Set all to red.
  // FastLED.show();
  // hold(20);

  // for (int i = 0; i < row; i++)
  // {
  //   leds[i] = CHSV(start_hue, 255, 255);
  //   for (int h = 2; h <= split_value - 2; h += 2)
  //   {
  //     leds[backwards(row, h, i)] = CHSV(start_hue, 255, 255);
  //     leds[forwards(row, h, i)] = CHSV(start_hue, 255, 255);
  //   }
  //   leds[(NUM_LEDS)-1 - i] = CHSV(start_hue, 255, 255);
  //   start_hue += delta_hue;
  // };
}
