/*
 *******************************************************************************
 * Copyright (c) 2020-2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#if defined(ARDUINO_GENERIC_G031J4MX) || defined(ARDUINO_GENERIC_G031J6MX) ||\
    defined(ARDUINO_GENERIC_G041J6MX)
#include "pins_arduino.h"

// Digital PinName array
const PinName digitalPin[] = {
  PA_0,   // D1/A0
  PA_1,   // D2/A1
  PA_2,   // D3/A2
  PA_8,   // D4
  PA_11,  // D5/A3
  PA_12,  // D6/A4
  PA_13,  // D7/A5
  PA_14,  // D8/A6
  PA_15,  // D9
  PB_0,   // D10/A7
  PB_1,   // D11/A8
  PB_5,   // D12
  PB_6,   // D13
  PB_7,   // D14/A9
  PB_8,   // D15
  PB_9,   // D16
  PC_14,  // D17
  PF_2,   // D18
  PA_9_R, // D19
  PA_10_R // D20
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  0,  // A0,  PA0
  1,  // A1,  PA1
  2,  // A2,  PA2
  4,  // A3,  PA11
  5,  // A4,  PA12
  6,  // A5,  PA13
  7,  // A6,  PA14
  9,  // A7,  PB0
  10, // A8,  PB1
  13  // A9,  PB7
};

#endif /* ARDUINO_GENERIC_* */