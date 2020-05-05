#define DCSBIOS_IRQ_SERIAL
#include "DcsBios.h"

DcsBios::LED pltGearLight(0x12e6, 0x0200, 13);

void setup() {
  DcsBios::setup();
}

void loop() {
  DcsBios::loop();
}