// Copyright (C) 2020 Apparateq
//===----------------------------------------------------------------------===//
///
/// \file
///
/// \brief
///
//===----------------------------------------------------------------------===//

#include <stdio.h>
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/eusart.h"

//#define DISABLE_PRINTF

#ifdef DISABLE_PRINTF
    #define printf(fmt, ...) (0)
#endif


// overload putch() so printf() goes to UART
void putch(char data) {
  while (! PIR1bits.TXIF) {
    continue;
  }
  TXREG = data;
}



//
void UARTRxLoop() {
  while (1) {
    uint8_t ch = EUSART_Read();
     if (ch == 'a') {
      LED_D7_Toggle();
    }
    if (ch == 'b') {
      LED_D6_Toggle();
    }
    if (ch == 'c') {
      LED_D5_Toggle();
    }
    if (ch == 'd') {
      LED_D4_Toggle();
    }
    //EUSART_Write(ch);
  }
}

// Main program loop
void main(void) {
  // initialize the device
  SYSTEM_Initialize();

  //INTERRUPT_GlobalInterruptEnable();
  //INTERRUPT_PeripheralInterruptEnable();

  printf("\e[1;1H\e[2J");
  printf("Test\r\n\r\n");
  
  
  UARTRxLoop();
  
}
