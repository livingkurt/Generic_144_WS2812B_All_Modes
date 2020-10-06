

void sparkle_rainbow_saturation()
{

  int strobe = 20;
  int rate = 10;
  int start_hue;
  int delta_hue = 5;
  start_hue = -1 * millis() / rate;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    for (int i = 0; i < 10; i++)
    {
      int random_leds[10];
      for (int i = 0; i < 10; i++)
      {
        random_leds[i] = random(NUM_LEDS);
      }
      for (int i = 0; i < 10; i++)
      {
        leds[random_leds[i]] = CHSV(start_hue, random(127, 255), random(0, 255)); // Change To Random LED and change color to White
      }
      FastLED.show();
      hold(strobe);
      for (int i = 0; i < 10; i++)
      {
        leds[random_leds[i]] = CHSV(0, 0, 0); // Change To Random LED and change color to White
      }
      FastLED.show();
    }
    start_hue += delta_hue;
  }
}