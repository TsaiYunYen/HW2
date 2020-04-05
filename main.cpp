#include "mbed.h"

Serial pc( USBTX, USBRX );
AnalogOut Aout(DAC0_OUT);

AnalogIn Ain(A0);

BusOut display(D6, D7, D9, D10, D11, D5, D4, D8);

char table[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};


DigitalIn  Switch(SW3);

DigitalOut redLED(LED1);

DigitalOut greenLED(LED2);

float ADCdata;


int main(){
  float i

  while(1){

    for (i=0; i<2;i+=0.05){
      Aout = 0.5 + 0.5*sin(i*3.1415926)
      wait(0.01);
    }

    if( Switch == 1 ){

      ADCdata = Ain;
      wait(0.5)


      greenLED = 0;

      redLED = 1;

    }

    else{

      redLED = 0;

      greenLED = 1;

    }

  }

}