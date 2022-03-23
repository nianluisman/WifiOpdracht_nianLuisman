#include <Adafruit_PCD8544.h>
#include <print.h> 
int8_t sclk_pin  = 3;
int8_t din_pin = 4; 
int8_t dc_pin = 5;
int8_t cs_pin = 6;
int8_t rst_pin = 7;
Adafruit_PCD8544 display = Adafruit_PCD8544(7, 6, 5, 4, 3);
void setup() {
   display.begin();
     display.clearDisplay(); 
  // init done

  // you can change the contrast around to adapt the display
  // for the best viewing!
  display.setContrast(75);
 
  
  // text display tests
  display.setTextSize(2);
  display.setTextColor(BLACK);
  display.setCursor(0,0);
  display.println("Hello, world!");
  display.display();
  delay(2000);

}
void loop() {
}
