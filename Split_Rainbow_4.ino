void split_rainbow_4()
{
  int rate = 10;
  int split_value = 4;
  int row = NUM_LEDS / split_value;
  int start_hue;
  int delta_hue = 10;
  start_hue = -1 * millis() / rate;
  for (int i = 0; i < row; i++)
  {
    leds[i] = CHSV(start_hue, 255, 255);
    leds[backwards(row, 2, i)] = CHSV(start_hue, 255, 255);
    leds[forwards(row, 2, i)] = CHSV(start_hue, 255, 255);
    leds[(NUM_LEDS)-1 - i] = CHSV(start_hue, 255, 255);
    start_hue += delta_hue;
  };
  FastLED.show();
}
