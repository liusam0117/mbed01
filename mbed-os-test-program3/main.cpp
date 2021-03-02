#include "mbed.h"

DigitalOut myled(LED3);
DigitalOut myled2(LED1);

int main()
{
   while (1)
   {  
      for(int i = 0; i < 3; ++i){
         myled = 1;  // set LED2 pin to high
         ThisThread::sleep_for(500ms);
         myled.write(0);  // set LED2 pin to low
         ThisThread::sleep_for(500ms);
      }
      for(int i = 0; i < 2; ++i){
         myled2 = 1;  // set LED2 pin to high
         ThisThread::sleep_for(500ms);
         myled2.write(0);  // set LED2 pin to low
         ThisThread::sleep_for(500ms);
      }
      
   }
}