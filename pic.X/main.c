/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F1455
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/eusart.h"
#include "mcc_generated_files/adc.h"
#include "ad9833.h"
#include "midiparser.h"

/*
                         Main application
 */
void midiparsing(){
    int i = 0;
    bool midiin = false;
    if(EUSART_is_rx_ready()){
        midi[0] = 0;
        midi[1] = 0;
        midi[2] = 0;
    }
    while(EUSART_is_rx_ready()){
        midi[i++] = EUSART_Read();
        midiin = true;
    } 
    if(midiin)
        parseMidi(i);
}

uint8_t midi[3];
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    ad9833_reset();
    __delay_ms(100);
    ad9833_Output(false);
    
    uint16_t actualWave = SINE;

    while (1)
    {
        uint16_t wave = ADC_GetConversion(WAVE);
        if(wave){
            if(wave < 333){
                if(actualWave != SINE){
                    ad9833_setW(REG0, SINE);
                    actualWave = SINE;
                }
            }else if(wave > 333 && wave < 666){
                if(actualWave != SQUARE){
                    ad9833_setW(REG0, SQUARE);
                    actualWave = SQUARE;
                }
            }else{
                if(actualWave != TRIANGLE){
                    ad9833_setW(REG0, TRIANGLE);
                    actualWave = TRIANGLE;
                }
            }
        }
        // Add your application code
        midiparsing();
    }
}
/**
 End of File
*/