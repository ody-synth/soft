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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F1455
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
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

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set B aliases
#define B_PORT                 PORTAbits.RA0
#define B_GetValue()           PORTAbits.RA0

// get/set A aliases
#define A_PORT                 PORTAbits.RA1
#define A_GetValue()           PORTAbits.RA1

// get/set WAVE aliases
#define WAVE_TRIS                 TRISAbits.TRISA4
#define WAVE_LAT                  LATAbits.LATA4
#define WAVE_PORT                 PORTAbits.RA4
#define WAVE_WPU                  WPUAbits.WPUA4
#define WAVE_ANS                  ANSELAbits.ANSA4
#define WAVE_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define WAVE_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define WAVE_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define WAVE_GetValue()           PORTAbits.RA4
#define WAVE_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define WAVE_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define WAVE_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define WAVE_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define WAVE_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define WAVE_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set FSYNC aliases
#define FSYNC_TRIS                 TRISAbits.TRISA5
#define FSYNC_LAT                  LATAbits.LATA5
#define FSYNC_PORT                 PORTAbits.RA5
#define FSYNC_WPU                  WPUAbits.WPUA5
#define FSYNC_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define FSYNC_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define FSYNC_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define FSYNC_GetValue()           PORTAbits.RA5
#define FSYNC_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define FSYNC_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define FSYNC_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define FSYNC_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)

// get/set SCK aliases
#define SCK_TRIS                 TRISCbits.TRISC0
#define SCK_LAT                  LATCbits.LATC0
#define SCK_PORT                 PORTCbits.RC0
#define SCK_ANS                  ANSELCbits.ANSC0
#define SCK_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define SCK_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define SCK_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define SCK_GetValue()           PORTCbits.RC0
#define SCK_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define SCK_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define SCK_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set SDI aliases
#define SDI_TRIS                 TRISCbits.TRISC1
#define SDI_LAT                  LATCbits.LATC1
#define SDI_PORT                 PORTCbits.RC1
#define SDI_ANS                  ANSELCbits.ANSC1
#define SDI_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SDI_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SDI_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SDI_GetValue()           PORTCbits.RC1
#define SDI_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SDI_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SDI_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define SDI_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set SDO aliases
#define SDO_TRIS                 TRISCbits.TRISC2
#define SDO_LAT                  LATCbits.LATC2
#define SDO_PORT                 PORTCbits.RC2
#define SDO_ANS                  ANSELCbits.ANSC2
#define SDO_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define SDO_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define SDO_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define SDO_GetValue()           PORTCbits.RC2
#define SDO_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define SDO_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define SDO_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define SDO_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)

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
    Interrupt on Change Handler for the IOCAF0 pin functionality
 * @Example
    IOCAF0_ISR();
 */
void IOCAF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_InterruptHandler);

*/
extern void (*IOCAF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_DefaultInterruptHandler);

*/
void IOCAF0_DefaultInterruptHandler(void);


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



#endif // PIN_MANAGER_H
/**
 End of File
*/