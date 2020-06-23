// Pattern 4

#define RATE_4 10
#define GAP_4 10
#define NUM_X_4 12
int start_hue_4;
int delta_hue_4 = 10;
int ROW_4 = NUM_LEDS / NUM_X_4;

void rainbow_pulse()
{
  Serial.println("pattern_4");
  start_hue_4 = -1 * millis() / RATE_4;
  for (int i = 0; i < ROW_4; i++)
  {
    // Row 1
    leds[ROW_4 - 1 - i] = CHSV(start_hue_4, 255, 255);
    // Row 2
    leds[ROW_4 + i] = CHSV(start_hue_4, 255, 255);
    // Row 3_4
    leds[i + (ROW_4 * 2)] = CHSV(start_hue_4, 255, 255);
    // Row 4
    leds[ROW_4 * 4 - 1 - i] = CHSV(start_hue_4, 255, 255);
    // Row 5
    leds[ROW_4 * 5 - 1 - i] = CHSV(start_hue_4, 255, 255);
    // Row 6
    leds[ROW_4 * 5 + i] = CHSV(start_hue_4, 255, 255);
    // Row 7
    leds[i + ROW_4 * 6] = CHSV(start_hue_4, 255, 255);
    // Row 8
    leds[ROW_4 * 8 - 1 - i] = CHSV(start_hue_4, 255, 255);
    // Row 9
    leds[i + ROW_4 * 8] = CHSV(start_hue_4, 255, 255);
    // Row 10
    leds[ROW_4 * 10 - 1 - i] = CHSV(start_hue_4, 255, 255);
    // Row 11
    leds[i + ROW_4 * 10] = CHSV(start_hue_4, 255, 255);
    // Row 12
    leds[NUM_LEDS - 1 - i] = CHSV(start_hue_4, 255, 255);

    start_hue_4 += delta_hue_4;
    FastLED.show();
  };
}