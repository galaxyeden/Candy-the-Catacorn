#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_DotStar.h>
#include <Adafruit_FreeTouch.h>
#include <adafruit_ptc.h>
#include <samd21_ptc_component.h>

#define NUMSTARS  2
#define STARDATA 7
#define STARCLOCK 8

Adafruit_DotStar stars = Adafruit_DotStar(NUMSTARS, STARDATA, STARCLOCK, DOTSTAR_BRG);
Adafruit_FreeTouch qt_1 = Adafruit_FreeTouch(A0, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
Adafruit_FreeTouch qt_2 = Adafruit_FreeTouch(A3, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);

// Pin notes:
// - D0/A2 controls the white lights on the paws
// - D1/A0 is the right ear capacitive touch sensor
// - D2/A1 is the first tail section
// - D4/A4 is the second tail section 
// - D13 is the corner of the eyes
// - D3/A3 is the left ear capacitive touch sensor
// - The eyes are the internal DotStar pin

void setup() {
  pinMode(13, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  stars.setBrightness(191);
  stars.begin();
  stars.show();
}

void loop() {
  digitalWrite(13, HIGH);
  for(int pixelSel = 0; pixelSel < NUMSTARS; pixelSel++){
    stars.setPixelColor(pixelSel, 31, 0, 50);
  }
  stars.show();
  analogWrite(0, 20);
  analogWrite(2, 31);
  analogWrite(4, 31);
}