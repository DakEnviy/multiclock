#include <M5Stack.h>

#include "images.h"

void setup() {
  M5.begin();

  M5.Lcd.fillScreen(TFT_BLACK);
  M5.Lcd.drawBitmap(10, 10, 30, 30, temp_plus);
}

void loop() {
  // put your main code here, to run repeatedly:

}
