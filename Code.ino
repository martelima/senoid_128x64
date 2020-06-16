
#include "U8glib.h"

#define  pwm  11

float sine;
int sine_i;

U8GLIB_ST7920_128X64_1X u8g(6, 5, 4 , 7);

void setup() 
{
   pinMode(pwm, OUTPUT);
   Serial.begin(9600);

   pinMode(8, OUTPUT);

}

void loop() 
{
 

u8g.firstPage();
  do {
    for(int i=0;i<=128;i++){
      sine = sin(10*i*(PI/180.0));
      sine_i = 32+int(sine*64.0/2.0);
      u8g.drawPixel(i,sine_i);
    }
  } while ( u8g.nextPage() );
}










