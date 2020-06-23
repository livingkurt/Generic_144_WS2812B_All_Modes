#include <FastLED.h>

#if defined(FASTLED_VERSION) && (FASTLED_VERSION < 3001000)
#warning "Requires FastLED 3.1 or later; check github for latest code."
#endif

// Data Pin on Arduino
#define LED_PIN 5
// LED Chip Type
#define LED_TYPE WS2812B
// Number of LEDs Used
#define NUM_LEDS 144
// The Order of RGB was wired on the chip
#define COLOR_ORDER GRB
// Interval Between Mode Changes
#define INTERVAL 100
// Choose Random or Not Random Mode Changes
#define RANDOM "Not Random"

CRGB leds[NUM_LEDS];

#define BRIGHTNESS 255
#define FRAMES_PER_SECOND 120

TBlendType blendingType; //tBlendType is a type of value like int/char/uint8_t etc., use to choose LINERBLEND and NOBLEND

void setup()
{
  delay(3000); // 3 second delay for recovery
  Serial.begin(9600);
  // tell FastLED about the LED strip configuration
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  // set master brightness control
  FastLED.setBrightness(BRIGHTNESS);
}
// List of patterns to cycle through.  Each is defined as a separate function below.
typedef void (*SimplePatternList[])();


SimplePatternList gPatterns = {
  // flash_rainbow,
  color_palette,
  rainbow_cycle, 
  c2c_white,
  c2c_rainbow_fade, 
  rainbow_cycle, 
  sparkle_white, 
  worm_fade_white, 
  rainbow_pulse, 
  sparkle_rainbow, 
  worm_fade_rainbow, 
  c2c_rainbow_sweep,
  white_rainbow, 
  all_fade, 
  shooting_stars,
  c2c_rainbow_on_off_sweep,
  all_fade_rainbow,
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
    Serial.println(random(num_modes));
    gCurrentPatternNumber = (gCurrentPatternNumber + 1) % ARRAY_SIZE(gPatterns);
  }
  
}