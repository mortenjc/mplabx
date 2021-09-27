/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.5
        Device            :  PIC16F18346
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.20 and above
        MPLAB 	          :  MPLAB X 5.40	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED_D5 aliases
#define LED_D5_TRIS                 TRISAbits.TRISA1
#define LED_D5_LAT                  LATAbits.LATA1
#define LED_D5_PORT                 PORTAbits.RA1
#define LED_D5_WPU                  WPUAbits.WPUA1
#define LED_D5_OD                   ODCONAbits.ODCA1
#define LED_D5_ANS                  ANSELAbits.ANSA1
#define LED_D5_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED_D5_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED_D5_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED_D5_GetValue()           PORTAbits.RA1
#define LED_D5_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED_D5_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED_D5_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED_D5_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED_D5_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED_D5_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED_D5_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED_D5_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED_D6 aliases
#define LED_D6_TRIS                 TRISAbits.TRISA2
#define LED_D6_LAT                  LATAbits.LATA2
#define LED_D6_PORT                 PORTAbits.RA2
#define LED_D6_WPU                  WPUAbits.WPUA2
#define LED_D6_OD                   ODCONAbits.ODCA2
#define LED_D6_ANS                  ANSELAbits.ANSA2
#define LED_D6_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_D6_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_D6_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_D6_GetValue()           PORTAbits.RA2
#define LED_D6_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_D6_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_D6_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_D6_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_D6_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED_D6_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED_D6_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_D6_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED_D4 aliases
#define LED_D4_TRIS                 TRISAbits.TRISA5
#define LED_D4_LAT                  LATAbits.LATA5
#define LED_D4_PORT                 PORTAbits.RA5
#define LED_D4_WPU                  WPUAbits.WPUA5
#define LED_D4_OD                   ODCONAbits.ODCA5
#define LED_D4_ANS                  ANSELAbits.ANSA5
#define LED_D4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED_D4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED_D4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED_D4_GetValue()           PORTAbits.RA5
#define LED_D4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED_D4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED_D4_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED_D4_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LED_D4_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LED_D4_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LED_D4_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define LED_D4_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set I2CDATA aliases
#define I2CDATA_TRIS                 TRISBbits.TRISB4
#define I2CDATA_LAT                  LATBbits.LATB4
#define I2CDATA_PORT                 PORTBbits.RB4
#define I2CDATA_WPU                  WPUBbits.WPUB4
#define I2CDATA_OD                   ODCONBbits.ODCB4
#define I2CDATA_ANS                  ANSELBbits.ANSB4
#define I2CDATA_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define I2CDATA_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define I2CDATA_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define I2CDATA_GetValue()           PORTBbits.RB4
#define I2CDATA_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define I2CDATA_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define I2CDATA_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define I2CDATA_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define I2CDATA_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define I2CDATA_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define I2CDATA_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define I2CDATA_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RB6 procedures
#define RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RB6_GetValue()              PORTBbits.RB6
#define RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RB6_SetPullup()             do { WPUBbits.WPUB6 = 1; } while(0)
#define RB6_ResetPullup()           do { WPUBbits.WPUB6 = 0; } while(0)
#define RB6_SetAnalogMode()         do { ANSELBbits.ANSB6 = 1; } while(0)
#define RB6_SetDigitalMode()        do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()              PORTBbits.RB7
#define RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()             do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()           do { WPUBbits.WPUB7 = 0; } while(0)
#define RB7_SetAnalogMode()         do { ANSELBbits.ANSB7 = 1; } while(0)
#define RB7_SetDigitalMode()        do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set LED_D7 aliases
#define LED_D7_TRIS                 TRISCbits.TRISC5
#define LED_D7_LAT                  LATCbits.LATC5
#define LED_D7_PORT                 PORTCbits.RC5
#define LED_D7_WPU                  WPUCbits.WPUC5
#define LED_D7_OD                   ODCONCbits.ODCC5
#define LED_D7_ANS                  ANSELCbits.ANSC5
#define LED_D7_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED_D7_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED_D7_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED_D7_GetValue()           PORTCbits.RC5
#define LED_D7_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED_D7_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED_D7_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define LED_D7_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define LED_D7_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define LED_D7_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define LED_D7_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define LED_D7_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/