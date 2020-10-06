void pulse_rainbow()
{
  int strobe = 10;
  unsigned long time_now = 0;
  int brightness = 255;

  int rainbow_palette[] = {0, 32, 64, 96, 128, 160, 192, 224};
  int numColors = (sizeof(rainbow_palette) / sizeof(rainbow_palette[0]));

  for (int h = 0; h < numColors; h++)
  {

    for (int i = 50; i < brightness; i++)
    {
      fill_solid(leds, NUM_LEDS, CHSV(rainbow_palette[h], 255, i)); // Set all to Off.
      hold(strobe);
      FastLED.show();
    }

    for (int i = brightness; i > 50; i--)
    {
      fill_solid(leds, NUM_LEDS, CHSV(rainbow_palette[h], 255, i)); // Set all to Off.
      hold(strobe);
      FastLED.show();
    }
  }
}
