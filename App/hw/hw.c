#include "hw.h"

void hwInit(){
    bspInit();

    rtcInit();
    resetInit();
    
    ledInit();
    usbInit();
    uartInit();
    flashInit();
}