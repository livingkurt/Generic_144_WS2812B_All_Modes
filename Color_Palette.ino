
// #define DataRate_Mhz 4     // how fast data refreshes at - [----CHECK THIS----] - slower rates are more successful when timing is not essential!!!!!

// CRGBPalette16 currentPalette(PartyColors_p);
uint8_t i;
static uint8_t startPoint = 0;
static uint8_t paletteQuantityLength = 128 / NUM_LEDS; //value between 0 and 10, how much of the lights should be lit up at once, 0 being all

#define RATE_16 10

int start_index;
int index_interval = 5;

// DEFINE_GRADIENT_PALETTE( my_p ) {
//   0,     255,  50,  0, 
// 255,   0,0,255 };

// Gradient palette "hsv_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/h5/tn/hsv.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 256 bytes of program space.

// DEFINE_GRADIENT_PALETTE( hsv_gp ) {
//     0, 255,  0,  0,
//     4, 255,  1,  0,
//     8, 255,  6,  0,
//    12, 255, 15,  0,
//    16, 255, 29,  0,
//    20, 255, 47,  0,
//    24, 255, 71,  0,
//    28, 255,100,  0,
//    32, 255,135,  0,
//    36, 255,175,  0,
//    40, 255,221,  0,
//    44, 234,255,  0,
//    48, 179,255,  0,
//    52, 133,255,  0,
//    56,  95,255,  0,
//    60,  65,255,  0,
//    64,  41,255,  0,
//    68,  24,255,  0,
//    72,  12,255,  0,
//    76,   4,255,  0,
//    80,   1,255,  0,
//    84,   1,255,  0,
//    89,   0,255,  1,
//    93,   0,255,  2,
//    97,   0,255,  7,
//   101,   0,255, 17,
//   105,   0,255, 31,
//   109,   0,255, 52,
//   113,   0,255, 78,
//   117,   0,255,111,
//   121,   0,255,151,
//   125,   0,255,199,
//   129,   0,255,255,
//   133,   0,205,255,
//   137,   0,161,255,
//   141,   0,122,255,
//   145,   0, 90,255,
//   149,   0, 62,255,
//   153,   0, 40,255,
//   157,   0, 23,255,
//   161,   0, 11,255,
//   165,   0,  4,255,
//   170,   0,  1,255,
//   174,   1,  0,255,
//   178,   1,  0,255,
//   182,   4,  0,255,
//   186,  12,  0,255,
//   190,  24,  0,255,
//   194,  41,  0,255,
//   198,  65,  0,255,
//   202,  95,  0,255,
//   206, 133,  0,255,
//   210, 179,  0,255,
//   214, 234,  0,255,
//   218, 255,  0,216,
//   222, 255,  0,166,
//   226, 255,  0,123,
//   230, 255,  0, 88,
//   234, 255,  0, 60,
//   238, 255,  0, 37,
//   242, 255,  0, 21,
//   246, 255,  0, 10,
//   250, 255,  0,  3,
//   255, 255,  0,  1};

// Gradient palette "jet_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/h5/tn/jet.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 64 bytes of program space.

DEFINE_GRADIENT_PALETTE( jet_gp ) {
    0,   0,  0,123,
   17,   0,  0,255,
   33,   0, 11,255,
   51,   0, 55,255,
   68,   0,135,255,
   84,   0,255,255,
  102,   6,255,255,
  119,  41,255,123,
  135, 120,255, 44,
  153, 255,255,  7,
  170, 255,255,  0,
  186, 255,135,  0,
  204, 255, 55,  0,
  221, 255, 11,  0,
  237, 255,  0,  0,
  255, 120,  0,  0};


CRGBPalette16 myPal = jet_gp;

void color_palette() 
{
  Serial.println("pattern_1");
  start_index = -1 * millis() / RATE_16;
  for (int i = 0; i < NUM_LEDS; i++)

  {
    leds[i] = ColorFromPalette( myPal, start_index, 255, LINEARBLEND);
    start_index += index_interval;
  };
  FastLED.show();
  
  
}