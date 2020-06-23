#define RATE_15 10
#define STROBE_15 5
#define GAP_15 50

int start_hue_15;
int delta_hue_15;


void flash_rainbow()
{
  delta_hue_15 = 30;
  start_hue_15 = -1 * millis() / RATE_15;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] = CHSV(start_hue_15, 255, 255);
    start_hue_15 += delta_hue_15;

  };
  FastLED.show();
  FastLED.delay(STROBE_15);
  fill_solid(leds, NUM_LEDS, CHSV( 0, 255, 255 ));
  FastLED.show();
  FastLED.delay(GAP_15);
}
