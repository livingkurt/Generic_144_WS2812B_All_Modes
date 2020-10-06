

void sparkle_white_rainbow_all_fade()
{
  int strobe = 20;
  int rate = 10;
  int start_hue;
  int delta_hue = 20;
  delta_hue = 20;
  start_hue = -1 * millis() / rate;

  fill_solid(leds, NUM_LEDS, CHSV(start_hue, 255, 200)); // Set all to red.
  FastLED.show();

  int rand = random(NUM_LEDS);
  int random_leds[5];
  for (int i = 0; i < 5; i++)
  {
    random_leds[i] = random(NUM_LEDS);
  }
  for (int i = 0; i < 5; i++)
  {
    leds[random_leds[i]] = CHSV(0, 0, 255); // Change To Random LED and change color to White
  }
  FastLED.show();
  hold(strobe);
  start_hue += delta_hue;
}