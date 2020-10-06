void rainbow_cycle()
{
  int start_index;
  start_index = -1 * millis() / 10;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] = CHSV(start_index, 255, 255);
    // leds[i] = ColorFromPalette(currentPalette, start_index, 255, LINEARBLEND);
    start_index += 5;
  };
}
