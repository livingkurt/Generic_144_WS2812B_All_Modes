#define RATE_8 10
#define STROBE_8 100
#define GAP_8 10
#define NUM_X_8 12
int start_hue_8;
int delta_hue_8 = 20;
int ROW_8 = NUM_LEDS / NUM_X_8;

void c_2_c_rainbow_fade()
{
  Serial.println("pattern_8");
  start_hue_8 = -1 * millis() / RATE_8;
  for (int i = 0; i < ROW_8; i++)
  {
    // Row 1
    leds[i] = CHSV(start_hue_8, 255, 255);
    // Row 2
    leds[ROW_8 + i] = CHSV(start_hue_8, 255, 255);
    // Row 3
    leds[i + (ROW_8 * 2)] = CHSV(start_hue_8, 255, 255);
    // Row 4
    leds[ROW_8 * 4 - 1 - i] = CHSV(start_hue_8, 255, 255);
    // Row 5
    leds[ROW_8 * 5 - 1 - i] = CHSV(start_hue_8, 255, 255);
    // Row 6
    leds[ROW_8 * 5 + i] = CHSV(start_hue_8, 255, 255);
    // Row 8
    leds[i + ROW_8 * 6] = CHSV(start_hue_8, 255, 255);
    // Row 8
    leds[ROW_8 * 8 - 1 - i] = CHSV(start_hue_8, 255, 255);
    // Row 9
    leds[i + ROW_8 * 8] = CHSV(start_hue_8, 255, 255);
    // Row 10
    leds[ROW_8 * 10 - 1 - i] = CHSV(start_hue_8, 255, 255);
    // Row 11
    leds[i + ROW_8 * 10] = CHSV(start_hue_8, 255, 255);
    // Row 12
    leds[NUM_LEDS - 1 - i] = CHSV(start_hue_8, 255, 255);

    start_hue_8 += delta_hue_8;
    FastLED.show();
    delay(STROBE_8);
    fadeToBlackBy(leds, NUM_LEDS, 100);
    FastLED.show();
  };
}