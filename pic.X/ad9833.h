/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // include processor files - each processor file is guarded.  

#include "mcc_generated_files/spi_driver.h"
#include "mcc_generated_files/pin_manager.h"

// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations

// Comment a function and leverage automatic documentation with slash star star
/**
    <p><b>Function prototype:</b></p>
  
    <p><b>Summary:</b></p>

    <p><b>Description:</b></p>

    <p><b>Precondition:</b></p>

    <p><b>Parameters:</b></p>

    <p><b>Returns:</b></p>

    <p><b>Example:</b></p>
    <code>
 
    </code>

    <p><b>Remarks:</b></p>
 */
// TODO Insert declarations or function prototypes (right here) to leverage 
// live documentation

#define SINE 0x2000
#define SQUARE 0x2028
#define TRIANGLE 0x2002

#define pow2_28				268435456L

#define RESET_CMD			0x0100		// Reset enabled (also CMD RESET)
/*		Sleep mode
 * D7	1 = internal clock is disabled
 * D6	1 = put DAC to sleep
 */
#define SLEEP_MODE			0x00C0		// Both DAC and Internal Clock
#define DISABLE_DAC			0x0040
#define	DISABLE_INT_CLK		0x0080

#define PHASE_WRITE_CMD		0xC000		// Setup for Phase write
#define PHASE1_WRITE_REG	0x2000		// Which phase register
#define FREQ0_WRITE_REG		0x4000		// 
#define FREQ1_WRITE_REG		0x8000
#define PHASE1_OUTPUT_REG	0x0400		// Output is based off REG0/REG1
#define FREQ1_OUTPUT_REG	0x0800		// ditto

typedef enum { REG0, REG1, SAME_AS_REG0 } Registers;

unsigned long refF = 4000000;

bool DacDisabled = false;
bool IntClkDisabled = false;
bool outputEnabled = false;
uint16_t waveForm0 = SINE;
uint16_t waveForm1 = SINE;
unsigned long frequency0 = 1;		// 1 KHz sine wave to start
unsigned long frequency1 = 1;
unsigned long phase0 = 0.0;
unsigned long phase1 = 0.0;				// 0 phase
Registers activeFreq = REG0; 
Registers activePhase = REG0;


void ad9833_reset();
void ad9833_setW(Registers waveReg, uint16_t mode);
void ad9833_setF(Registers freqReg, unsigned long f);
void ad9833_DAC( bool e);
void ad9833_Output(bool e);
void ad9833_SetOutputSource ( Registers freqReg, Registers phaseReg );
void ad9833_ApplySignal ( uint16_t waveType,
		Registers freqReg, float frequencyInHz,
		Registers phaseReg, float phaseInDeg );
void ad9833_writeControlRegister();
void ad9833_writeReg(uint16_t reg);



#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

