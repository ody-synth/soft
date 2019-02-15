/*
 * File:   ad9833.c
 * Author: uvautier
 *
 * Created on February 15, 2019, 4:48 PM
 */


#include <xc.h>
#include "ad9833.h"

void ad9833_reset(){
    ad9833_writeReg(RESET_CMD);
}

void ad9833_setW(Registers waveReg, uint16_t mode){
    if ( waveReg == REG0 )
		waveForm0 = mode;
	else
		waveForm1 = mode;
	ad9833_writeControlRegister();
}

void ad9833_setF(Registers freqReg, unsigned long f){
    if ( freqReg == REG0 ) frequency0 = f;
	else frequency1 = f;
    
    unsigned long freq = f*pow2_28/(float)refF;
    uint16_t upper14 = (unsigned int)((freq & 0xFFFC000) >> 14);
	uint16_t lower14 = (unsigned int)(freq & 0x3FFF);
    
    uint16_t reg = freqReg == REG0 ? FREQ0_WRITE_REG : FREQ1_WRITE_REG;
	lower14 |= reg;
	upper14 |= reg;
    
    ad9833_writeControlRegister();
    ad9833_writeReg(lower14);
    ad9833_writeReg(upper14);
}

void ad9833_DAC( bool e){
	DacDisabled = e;
	ad9833_writeControlRegister();
}

void ad9833_Output(bool e){
	outputEnabled = e;
	ad9833_writeControlRegister();
}
void ad9833_SetOutputSource ( Registers freqReg, Registers phaseReg ) {
	// TODO: Add more error checking?
	activeFreq = freqReg;
	if ( phaseReg == SAME_AS_REG0 )	activePhase = activeFreq;
	else activePhase = phaseReg;
	ad9833_writeControlRegister();
}

void ad9833_ApplySignal ( uint16_t waveType,
		Registers freqReg, float frequencyInHz,
		Registers phaseReg, float phaseInDeg ) {
	ad9833_setF( freqReg, frequencyInHz );
	ad9833_setW( freqReg, waveType );
	ad9833_SetOutputSource ( freqReg, phaseReg );
}

void ad9833_writeControlRegister(){
    uint16_t waveForm;
	// TODO: can speed things up by keeping a writeReg0 and writeReg1
	// that presets all bits during the various setup function calls
	// rather than setting flags. Then we could just call WriteRegister
	// directly.
	if ( activeFreq == REG0 ) {
		waveForm = waveForm0;
		waveForm &= ~FREQ1_OUTPUT_REG;
	}
	else {
		waveForm = waveForm1;
		waveForm |= FREQ1_OUTPUT_REG;
	}
	if ( activePhase == REG0 )
		waveForm &= ~PHASE1_OUTPUT_REG;
	else
		waveForm |= PHASE1_OUTPUT_REG;
	if ( outputEnabled )
		waveForm &= ~RESET_CMD;
	else
		waveForm |= RESET_CMD;
	if ( DacDisabled )
		waveForm |= DISABLE_DAC;
	else
		waveForm &= ~DISABLE_DAC;
	if ( IntClkDisabled )
		waveForm |= DISABLE_INT_CLK;
	else
		waveForm &= ~DISABLE_INT_CLK;

	ad9833_writeReg( waveForm );
}

void ad9833_writeReg(uint16_t reg){
    FSYNC_SetLow();
    
    spi_exchangeByte((uint8_t)(reg >> 8));
    spi_exchangeByte((uint8_t)(reg & 0x00FF));
}