#define RATE_10 10
#define STROBE_10 100
#define GAP_10 10
#define NUM_X_10 12
int start_hue_10;
int delta_hue_10 = 20;
int ROW_10 = NUM_LEDS / 3;

void shooting_stars()
{
  Serial.println("pattern_10");
  start_hue_10 = -1 * millis() / RATE_10;
  for (int i = 0; i < ROW_10; i++)
  {
    leds[i] = CHSV(start_hue_10, 0, 255);
    leds[i + 60] = CHSV(start_hue_10, 0, 255);
    leds[i + 96] = CHSV(start_hue_10, 0, 255);
    start_hue_10 += delta_hue_10;
    FastLED.show();
    delay(STROBE_10);
    fadeToBlackBy(leds, NUM_LEDS, 200);
    FastLED.show();
  };
}