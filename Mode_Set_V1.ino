#include <FastLED.h>
#if defined(FASTLED_VERSION) && (FASTLED_VERSION < 3001000)
#warning "Requires FastLED 3.1 or later; check github for latest code."
#endif

#define DATA_PIN 5
#define LED_TYPE WS2812B
#define COLOR_ORDER GRB
#define NUM_LEDS 144
#define INTERVAL 10
#define RANDOM "Not Random"

CRGB leds[NUM_LEDS];

#define BRIGHTNESS 255
#define FRAMES_PER_SECOND 120

void setup()
{
  delay(3000); // 3 second delay for recovery
  Serial.begin(9600);
  // tell FastLED about the LED strip configuration
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  // set master brightness control
  FastLED.setBrightness(BRIGHTNESS);
}
// List of patterns to cycle through.  Each is defined as a separate function below.
typedef void (*SimplePatternList[])();


SimplePatternList gPatterns = {
  C_2_C_Rainbow_Sweep,
  C_2_C_Rainbow_On_Off_Sweep,
  corner_to_corner_rainbow,
  all_fade_rainbow,
  rainbow_cycle, 
  sparkle_white, 
  worm_fade_white, 
  rainbow_pulse, 
  sparkle_rainbow, 
  worm_fade_rainbow, 
  white_rainbow, 
  corner_to_corner_rainbow, 
  all_fade, 
  shooting_stars
  };

int num_modes = (sizeof(gPatterns) / sizeof(gPatterns[0]));


uint8_t gCurrentPatternNumber = 0;

void loop()
{
  // Call the current pattern function once, updating the 'leds' array
  gPatterns[gCurrentPatternNumber]();
  // gPatterns[random(num_modes)]();
  FastLED.show();
  // insert a delay to keep the framerate modest
  FastLED.delay(1000 / FRAMES_PER_SECOND);
  EVERY_N_SECONDS(INTERVAL)
  {
    nextPattern(); // change patterns periodically
  }
}

#define ARRAY_SIZE(A) (sizeof(A) / sizeof((A)[0]))

void nextPattern()
{
  // add one to the current pattern number, and wrap around at the end
  
  if (RANDOM == "Random"){
    gCurrentPatternNumber = random(num_modes) % ARRAY_SIZE(gPatterns);
  }
  else {
    gCurrentPatternNumber = (gCurrentPatternNumber + 1) % ARRAY_SIZE(gPatterns);
  }
  
}