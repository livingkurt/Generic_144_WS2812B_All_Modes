

void all_rainbow()
{
  int strobe = 20;
  int rate = 10;
  int start_hue;
  int delta_hue = 20;
  delta_hue = 20;
  start_hue = -1 * millis() / rate;

  fill_solid(leds, NUM_LEDS, CHSV(start_hue, 255, 200)); // Set all to red.
  FastLED.show();
  start_hue += delta_hue;
}