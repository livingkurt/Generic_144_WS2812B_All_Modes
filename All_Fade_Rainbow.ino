
#define STROBE_12 1
#define BRIGHTNESS 255

int rainbow_palette[] = {0, 32, 64, 96, 128, 160, 192, 224};
int numColors = (sizeof(rainbow_palette) / sizeof(rainbow_palette[0]));



void all_fade_rainbow()
{
  for (int h = 0; h < numColors; h++) {
    for (int i = 50; i < BRIGHTNESS; i++)
    {
      fill_solid(leds, NUM_LEDS, CHSV(rainbow_palette[h], 255, i)); // Set all to Off.
      FastLED.delay(STROBE_12);
      FastLED.show();
    }

    for (int i = BRIGHTNESS; i > 50; i--)
    {
      fill_solid(leds, NUM_LEDS, CHSV(rainbow_palette[h], 255, i)); // Set all to Off.
      FastLED.delay(STROBE_12);
      FastLED.show();
    }
  }
}
