#include "Configuration.h"

CRGB leds[NUM_LEDS]; //declare LED strip object 

bool done=false;


void setup() {
  
  FastLED.addLeds<LED_TYPE, DATA_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(START_BRIGHTNESS);
}


void ledes(long color){

  for (int i=0; i<NUM_LEDS; i++){    
        leds[i]=color;        
      }
      
   FastLED.show();
  
  }

void doBrightness(){

  for (int i=START_BRIGHTNESS; i<END_BRIGHTNESS; i++){

    FastLED.setBrightness(i);
    FastLED.show();
    delay(DELAY_BRIGHTNESS);
    
    }
  
  }


void loop() {

  if (done==false){

     delay (1000);

     
     ledes(WHITE);
     delay (100);
     
     ledes(BLACK);
     delay (200);

     ledes(WHITE);
     delay (100);
     
     ledes(BLACK);
     delay (75);

     ledes(WHITE);
     delay (100);
     
     ledes(BLACK);
     delay (75);

     ledes(WHITE);
     delay (250);
     
     ledes(BLACK);
     delay (75);

     ledes(WHITE);
     delay (250);
     
     ledes(BLACK);
     delay (75);

     ledes(BLACK);
     delay (200);

     ledes(WHITE);
     delay (100);
     
     ledes(BLACK);
     delay (75);

     ledes(WHITE);
     delay (100);
     
     ledes(BLACK);
     delay (75);

     
     ledes(WHITE);

      doBrightness();

      done=true;
    
    }

}
