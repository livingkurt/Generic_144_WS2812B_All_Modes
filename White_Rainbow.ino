#define RATE_11 10
int start_hue_11;
int delta_hue_11 = 20;

void white_rainbow()
{
  delta_hue_11 = 20;
  start_hue_11 = -1 * millis() / RATE_11;
  fill_solid(leds, NUM_LEDS, CHSV(start_hue_11, 255, 100)); // Set all to red.
  FastLED.show();
  int rand = random(NUM_LEDS);
  leds[rand] = CHSV(255, 0, 255); // Change To Random LED and change color to White
  FastLED.show();
  start_hue_11 += delta_hue_11;
}