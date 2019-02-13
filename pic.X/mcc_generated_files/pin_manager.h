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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F1459
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB 	          :  MPLAB X 5.10	
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

// get/set B2 aliases
#define B2_PORT                 PORTAbits.RA1
#define B2_GetValue()           PORTAbits.RA1

// get/set A1 aliases
#define A1_TRIS                 TRISAbits.TRISA4
#define A1_LAT                  LATAbits.LATA4
#define A1_PORT                 PORTAbits.RA4
#define A1_WPU                  WPUAbits.WPUA4
#define A1_ANS                  ANSELAbits.ANSA4
#define A1_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define A1_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define A1_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define A1_GetValue()           PORTAbits.RA4
#define A1_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define A1_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define A1_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define A1_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define A1_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define A1_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set B1 aliases
#define B1_TRIS                 TRISAbits.TRISA5
#define B1_LAT                  LATAbits.LATA5
#define B1_PORT                 PORTAbits.RA5
#define B1_WPU                  WPUAbits.WPUA5
#define B1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define B1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define B1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define B1_GetValue()           PORTAbits.RA5
#define B1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define B1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define B1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define B1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)

// get/set SDI aliases
#define SDI_TRIS                 TRISBbits.TRISB4
#define SDI_LAT                  LATBbits.LATB4
#define SDI_PORT                 PORTBbits.RB4
#define SDI_WPU                  WPUBbits.WPUB4
#define SDI_ANS                  ANSELBbits.ANSB4
#define SDI_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SDI_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SDI_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SDI_GetValue()           PORTBbits.RB4
#define SDI_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SDI_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SDI_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SDI_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SDI_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define SDI_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

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

// get/set SCK aliases
#define SCK_TRIS                 TRISBbits.TRISB6
#define SCK_LAT                  LATBbits.LATB6
#define SCK_PORT                 PORTBbits.RB6
#define SCK_WPU                  WPUBbits.WPUB6
#define SCK_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define SCK_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define SCK_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define SCK_GetValue()           PORTBbits.RB6
#define SCK_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define SCK_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define SCK_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)

// get/set A2 aliases
#define A2_TRIS                 TRISBbits.TRISB7
#define A2_LAT                  LATBbits.LATB7
#define A2_PORT                 PORTBbits.RB7
#define A2_WPU                  WPUBbits.WPUB7
#define A2_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define A2_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define A2_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define A2_GetValue()           PORTBbits.RB7
#define A2_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define A2_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define A2_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define A2_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)

// get/set WAVE aliases
#define WAVE_TRIS                 TRISCbits.TRISC0
#define WAVE_LAT                  LATCbits.LATC0
#define WAVE_PORT                 PORTCbits.RC0
#define WAVE_ANS                  ANSELCbits.ANSC0
#define WAVE_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define WAVE_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define WAVE_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define WAVE_GetValue()           PORTCbits.RC0
#define WAVE_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define WAVE_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define WAVE_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define WAVE_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set BUTTON1 aliases
#define BUTTON1_TRIS                 TRISCbits.TRISC1
#define BUTTON1_LAT                  LATCbits.LATC1
#define BUTTON1_PORT                 PORTCbits.RC1
#define BUTTON1_ANS                  ANSELCbits.ANSC1
#define BUTTON1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define BUTTON1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define BUTTON1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define BUTTON1_GetValue()           PORTCbits.RC1
#define BUTTON1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define BUTTON1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define BUTTON1_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define BUTTON1_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set FSYNC aliases
#define FSYNC_TRIS                 TRISCbits.TRISC2
#define FSYNC_LAT                  LATCbits.LATC2
#define FSYNC_PORT                 PORTCbits.RC2
#define FSYNC_ANS                  ANSELCbits.ANSC2
#define FSYNC_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define FSYNC_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define FSYNC_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define FSYNC_GetValue()           PORTCbits.RC2
#define FSYNC_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define FSYNC_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define FSYNC_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define FSYNC_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set TRIGGER aliases
#define TRIGGER_TRIS                 TRISCbits.TRISC3
#define TRIGGER_LAT                  LATCbits.LATC3
#define TRIGGER_PORT                 PORTCbits.RC3
#define TRIGGER_ANS                  ANSELCbits.ANSC3
#define TRIGGER_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define TRIGGER_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define TRIGGER_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define TRIGGER_GetValue()           PORTCbits.RC3
#define TRIGGER_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define TRIGGER_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define TRIGGER_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define TRIGGER_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SDO aliases
#define SDO_TRIS                 TRISCbits.TRISC7
#define SDO_LAT                  LATCbits.LATC7
#define SDO_PORT                 PORTCbits.RC7
#define SDO_ANS                  ANSELCbits.ANSC7
#define SDO_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define SDO_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define SDO_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define SDO_GetValue()           PORTCbits.RC7
#define SDO_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define SDO_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define SDO_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define SDO_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

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


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF1 pin functionality
 * @Example
    IOCAF1_ISR();
 */
void IOCAF1_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF1 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF1 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF1_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF1 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF1_SetInterruptHandler() method.
    This handler is called every time the IOCAF1 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF1_SetInterruptHandler(IOCAF1_InterruptHandler);

*/
extern void (*IOCAF1_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF1 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF1_SetInterruptHandler() method.
    This handler is called every time the IOCAF1 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF1_SetInterruptHandler(IOCAF1_DefaultInterruptHandler);

*/
void IOCAF1_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF4 pin functionality
 * @Example
    IOCAF4_ISR();
 */
void IOCAF4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(IOCAF4_InterruptHandler);

*/
extern void (*IOCAF4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(IOCAF4_DefaultInterruptHandler);

*/
void IOCAF4_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF5 pin functionality
 * @Example
    IOCAF5_ISR();
 */
void IOCAF5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF5_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF5_SetInterruptHandler() method.
    This handler is called every time the IOCAF5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(IOCAF5_InterruptHandler);

*/
extern void (*IOCAF5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF5_SetInterruptHandler() method.
    This handler is called every time the IOCAF5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(IOCAF5_DefaultInterruptHandler);

*/
void IOCAF5_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF7 pin functionality
 * @Example
    IOCBF7_ISR();
 */
void IOCBF7_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF7 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF7 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF7_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF7_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF7 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF7_SetInterruptHandler() method.
    This handler is called every time the IOCBF7 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF7_SetInterruptHandler(IOCBF7_InterruptHandler);

*/
extern void (*IOCBF7_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF7 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF7_SetInterruptHandler() method.
    This handler is called every time the IOCBF7 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF7_SetInterruptHandler(IOCBF7_DefaultInterruptHandler);

*/
void IOCBF7_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/