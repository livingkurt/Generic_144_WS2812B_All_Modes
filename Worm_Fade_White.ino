// Pattern 3
#define GAP_3 1
#define STROBE_3 30

void worm_fade_white()
{
  Serial.println("pattern_3");
  for (int i = 0; i < NUM_LEDS; i++)
  {

    //    int pos = beatsin16(10,0,NUM_LEDS);
    leds[i] += CHSV(255, 0, 255);
    //    leds[i + 72] += CHSV( 255, 0, 255);

    FastLED.show();
    delay(STROBE_3);
    fadeToBlackBy(leds, NUM_LEDS, 30);
    FastLED.show();
  }
}