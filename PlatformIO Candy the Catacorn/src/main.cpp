#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_DotStar.h>
#include <Adafruit_FreeTouch.h>
#include <adafruit_ptc.h>
#include <samd21_ptc_component.h>

#define NUMSTARS  2
#define STARDATA 7
#define STARCLOCK 8

int moving = 0;
int initialRTouchValue = 0;
int RtouchValue = 0;
int initialLTouchValue = 0;
int LtouchValue = 0;
int n = 30;
int k = 1;
int d = 1;
int i = 30;
int j = 255;

Adafruit_DotStar stars = Adafruit_DotStar(NUMSTARS, STARDATA, STARCLOCK, DOTSTAR_BRG);
Adafruit_FreeTouch qt_1 = Adafruit_FreeTouch(A0, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
Adafruit_FreeTouch qt_2 = Adafruit_FreeTouch(A3, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);

// Pin notes:
// - D0/A2 controls the white lights on the paws
// - D1/A0 is the right ear capacitive touch sensor
// - D3/A3 is the left ear capacitive touch sensor
// - D2/A1 is the first tail section
// - D4/A4 is the second tail section 
// - D13 is the corner of the eyes
// - The eyes are the internal DotStar pin

void setup() {
  pinMode(13, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  stars.setBrightness(191);
  stars.begin();
  stars.show();
  initialRTouchValue = qt_1.measure();
  initialLTouchValue = qt_2.measure();
}

bool RcapTouchDetect() {
    RtouchValue = qt_1.measure(); 
    if(RtouchValue > (initialRTouchValue + 100)){
        return true;
    }
    else{
        return false;
    }
}

bool LcapTouchDetect() {
    LtouchValue = qt_2.measure(); 
    if(LtouchValue > (initialLTouchValue + 100)){
        return true;
    }
    else{
        return false;
    }
}

void loop() {
  n = n + k;
  if (n > 255)
  {
    k = -1;
    n = 255;
  }
  if (n < 30)
  {
    k = 1;
    n = 30;
  }
  for(int pixelSel = 0; pixelSel < NUMSTARS; pixelSel++){
    stars.setPixelColor(pixelSel, 0, 10, ((n / 12) + 3));
  }
  stars.show();
  analogWrite(13, (n / 8));
  analogWrite(0, (n / 20));
  analogWrite(2, (n / 8));
  analogWrite(4, (n / 8));
  delay(10);
}