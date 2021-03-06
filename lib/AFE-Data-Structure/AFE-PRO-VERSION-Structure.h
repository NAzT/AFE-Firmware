/* AFE Firmware for smart home devices, Website: https://afe.smartnydom.pl/ */

#ifndef _AFE_PRO_VERSION_Structure_h
#define _AFE_PRO_VERSION_Structure_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

struct PRO_VERSION {
  char serial[19];
  boolean valid;
};

#endif
