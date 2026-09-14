#include "hw.h"

void hwInit(){
    bspInit();
    cliInit();
    rtcInit();
    resetInit();
    
    ledInit();
    usbInit();
    uartInit();
    flashInit();
}