int num = 1;

void section_flash_all_rainbow()
{
  int rate = 10;
  int split_value = 5;
  int row = NUM_LEDS / split_value;
  int strobe = 0.5;
  int gap = 40;
  // int row = 5;
  int start_hue;
  int delta_hue = 50;

  start_hue = -1 * millis() / rate;
  fill_solid(leds, NUM_LEDS, CHSV(start_hue, 255, 150)); // Set all to red.
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
