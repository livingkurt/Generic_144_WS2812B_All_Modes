#include <FastLED.h>
#define STROBE_14 50
#define RATE_14 10
#define NUM_X_14 12



int start_hue_14;
int delta_hue_14 = 10;

int ROW_14 = NUM_LEDS / NUM_X_14;

void c2c_rainbow_on_off_sweep()
{
  start_hue_14 = -1 * millis() / RATE_14;
  for (int i = 0; i < ROW_14; i++)
  {

    // Row 2
    leds[ROW_14 * 2 - i - 1] = CHSV(start_hue_14, 255, 255);
    // Row 3
    leds[i + ROW_14 * 2] = CHSV(start_hue_14, 255, 255);
    start_hue_14 += delta_hue_14;
    
    FastLED.show();
    fadeToBlackBy(leds, NUM_LEDS, 30);
    FastLED.show();
    FastLED.delay(STROBE_14);
    
    // Row 2
    leds[i + ROW_14 * 2] = CHSV(0, 0, 0);
    // Row 3
    leds[ROW_14 * 2 - i - 1] = CHSV(0, 0, 0);
    // fadeToBlackBy(leds, ROW_14, 30);
    FastLED.show();
    fadeToBlackBy(leds, NUM_LEDS, 30);
    FastLED.show();
  };
  for (int i = 0; i < ROW_14; i++)
  {
    // // Row 1
    leds[ROW_14 - 1 - i] = CHSV(start_hue_14, 255, 255);
    // Row 4
    leds[i + ROW_14 * 3] = CHSV(start_hue_14, 255, 255);
    // Row 7
    leds[ROW_14 * 7 - 1 - i] = CHSV(start_hue_14, 255, 255);
    // Row 8
    leds[i + ROW_14 * 7] = CHSV(start_hue_14, 255, 255);
    start_hue_14 += delta_hue_14;
    FastLED.show();
    FastLED.delay(STROBE_14);
    // // Row 1
    leds[ROW_14 - 1 - i] = CHSV(0, 0, 0);
    // Row 4
    leds[i + ROW_14 * 3] = CHSV(0, 0, 0);
    // Row 7
    leds[ROW_14 * 7 - 1 - i] = CHSV(0, 0, 0);
    // Row 8
    leds[i + ROW_14 * 7] = CHSV(0, 0, 0);
    FastLED.show();
    // FastLED.delay(STROBE_14);
  };
  for (int i = 0; i < ROW_14; i++)
  {
    // Row 5
    leds[ROW_14 * 4 + i] = CHSV(start_hue_14, 255, 255);
    // Row 6
    leds[ROW_14 * 6 - i - 1] = CHSV(start_hue_14, 255, 255);
    // Row 9
    leds[ROW_14 * 8 + i] = CHSV(start_hue_14, 255, 255);
    // Row 12
    leds[ROW_14 * 12 - i - 1] = CHSV(start_hue_14, 255, 255);
    start_hue_14 += delta_hue_14;
    FastLED.show();
    FastLED.delay(STROBE_14);
    // Row 5
    leds[ROW_14 * 4 + i] = CHSV(0, 0, 0);
    // Row 6
    leds[ROW_14 * 6 - i - 1] = CHSV(0, 0, 0);
    // Row 9
    leds[ROW_14 * 8 + i] = CHSV(0, 0, 0);
    // Row 12
    leds[ROW_14 * 12 - i - 1] = CHSV(0, 0, 0);
    FastLED.show();
    // FastLED.delay(STROBE_14);
  };
  for (int i = 0; i < ROW_14; i++)
  {
    // Row 10
    leds[ROW_14 * 9 + i] = CHSV(start_hue_14, 255, 255);
    // Row 11
    leds[ROW_14 * 11 - 1 - i] = CHSV(start_hue_14, 255, 255);
    start_hue_14 += delta_hue_14;
    FastLED.show();
    FastLED.delay(STROBE_14);
    // Row 10
    leds[ROW_14 * 9 + i] = CHSV(0, 0, 0);
    // Row 11
    leds[ROW_14 * 11 - 1 - i] = CHSV(0, 0, 0);
    FastLED.show();
    // FastLED.delay(STROBE_14);
  };

  // delay(STROBE_14);
  // fadeToBlackBy(leds, NUM_LEDS, 10);

  FastLED.show();
}