// Pattern 6
#define STROBE_6 30
#define RATE_6 10
#define GAP_6 10
int start_hue_6;
int delta_hue_6 = 20;

void worm_fade_rainbow()
{
  Serial.println("pattern_6");
  start_hue_6 = -1 * millis() / RATE_6;
  for (int i = 0; i < NUM_LEDS; i++)

  {
    leds[i] = CHSV(start_hue_6, 255, 255);
    start_hue_6 += delta_hue_6;
    FastLED.show();
    delay(STROBE_6);
    fadeToBlackBy(leds, NUM_LEDS, 30);
    FastLED.show();
  };
}