// C++ demo program for Candy the Catacorn
// http://www.galaxyallie.space/Candy-the-Catacorn/

#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_DotStar.h>
#include <Adafruit_FreeTouch.h>
#include <adafruit_ptc.h>
#include <samd21_ptc_component.h>

#define NUMSTARS 2
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
int modeSel = 0;
int rtime = 0;

// Configure DotStar eyes and Adafruit FreeTouch for ears

Adafruit_DotStar stars = Adafruit_DotStar(NUMSTARS, STARDATA, STARCLOCK, DOTSTAR_BGR);
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
  Serial.begin(115200); // USB serial is used for diagnostics messages
  pinMode(13, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  stars.setBrightness(191); // 75% max brightness to reduce heat and aging of DotStars
  stars.begin();
  stars.show();
  if (! qt_1.begin()) {
    Serial.println("Failed to begin qt on pin A0");
  }
  if (! qt_2.begin()) {
    Serial.println("Failed to begin qt on pin A3");
  }
  initialRTouchValue = qt_1.measure();
  initialLTouchValue = qt_2.measure();
}

// Capacitive touch detection function for right ear (Candy's right)

bool RcapTouchDetect() {
    Serial.println("\n*** Touch Result ***");
    rtime = millis();
    RtouchValue = qt_1.measure(); 
    Serial.print("Right Ear: "); Serial.print(RtouchValue);
    Serial.print(" (");  Serial.print(millis() - rtime); Serial.println(" ms)");   
    if(RtouchValue > (initialRTouchValue + 100)){
        return true;
    }
    else{
        return false;
    }
}

// Capacitive touch detection function for left ear (Candy's left)

bool LcapTouchDetect() {
    Serial.println("\n*** Touch Result ***");
    rtime = millis();
    LtouchValue = qt_2.measure(); 
    Serial.print("Left Ear: "); Serial.print(LtouchValue);
    Serial.print(" (");  Serial.print(millis() - rtime); Serial.println(" ms)");   
    if(LtouchValue > (initialLTouchValue + 100)){
        return true;
    }
    else{
        return false;
    }
}

void loop() {
  if(RcapTouchDetect() == true){
      delay(50);
      if(RcapTouchDetect() == true){
          modeSel++;
          if(modeSel > 2){
            modeSel = 0;
          }
          delay(300);
      }
  }
  if(LcapTouchDetect() == true){
      delay(50);
      if(LcapTouchDetect() == true){
          modeSel++;
          if(modeSel > 2){
            modeSel = 0;
          }
          delay(300);
      }
  }
  if (modeSel == 0)
  {
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
      stars.setPixelColor(pixelSel, 10, 0, ((n / 12) + 3));
    }
    stars.show();
    analogWrite(13, (n / 8));
    analogWrite(0, (n / 20));
    analogWrite(2, (n / 8));
    analogWrite(4, (n / 8));
    delay(10);
  }
  if(modeSel == 1){
    for(int pixelSel = 0; pixelSel < NUMSTARS; pixelSel++){
      stars.setPixelColor(pixelSel, 5, 0, 5);
    }
    stars.show();
    analogWrite(13, 10);
    analogWrite(0, 255);
    analogWrite(2, 10);
    analogWrite(4, 10);
  }
  if(modeSel == 2){
    for(int pixelSel = 0; pixelSel < NUMSTARS; pixelSel++){
      stars.setPixelColor(pixelSel, 0, 10, 15);
    }
    stars.show();
    analogWrite(13, 10);
    analogWrite(0, 255);
    analogWrite(2, 10);
    analogWrite(4, 10);
  }
}