// Gradient palette "jet_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/h5/tn/jet.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 64 bytes of program space.

DEFINE_GRADIENT_PALETTE(jet_gp){
    0, 0, 0, 123,
    17, 0, 0, 255,
    33, 0, 11, 255,
    51, 0, 55, 255,
    68, 0, 135, 255,
    84, 0, 255, 255,
    102, 6, 255, 255,
    119, 41, 255, 123,
    135, 120, 255, 44,
    153, 255, 255, 7,
    170, 255, 255, 0,
    186, 255, 135, 0,
    204, 255, 55, 0,
    221, 255, 11, 0,
    237, 255, 0, 0,
    255, 120, 0, 0};

void cycle_color_palette()
{
  int rate = 10;
  int start_index;
  int index_interval = 5;
  CRGBPalette16 palette = jet_gp;
  start_index = -1 * millis() / rate;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] = ColorFromPalette(palette, start_index, 255, LINEARBLEND);
    start_index += index_interval;
  };
  FastLED.show();
}