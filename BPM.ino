void bpm()
{
  // colored stripes pulsing at a defined Beats-Per-Minute (BPM)
  uint8_t beat = beatsin8(30, 64, 30);
  int start_index;
  start_index = -1 * millis() / 10;
  for (int i = 0; i < NUM_LEDS / 2; i++)
  {
    leds[i] = CHSV(start_index + (i * 2), beat - start_index + (i * 10), 255);
    leds[NUM_LEDS - 1 - i] = CHSV(start_index + (i * 2), beat - start_index + (i * 10), 255);
  }
  start_index += 100;
}