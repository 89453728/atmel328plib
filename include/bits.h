/*
* BITS.H 
*
* Atmel atmega328p map macros memory access.
* License MIT
* This file defines all shortcuts to access into the registers 
* of atmel 328p, all components defined are extracter from 
* atmel atmega 328p datasheet
* Author: Achengli, Yassin
*/

#include "bit.h"

#ifndef BITS_H
#define BITS_H
// PINB accessing (see datasheet and see which pines are afected
#define PINB7 BIT7
#define PINB6 BIT6
#define PINB5 BIT5
#define PINB4 BIT4
#define PINB3 BIT3
#define PINB2 BIT2
#define PINB1 BIT1
#define PINB0 BIT0

// PINC
#define PINC7 BIT7
#define PINC6 BIT6
#define PINC5 BIT5
#define PINC4 BIT4
#define PINC3 BIT3
#define PINC2 BIT2
#define PINC1 BIT1
#define PINC0 BIT0

// PIND
#define PIND7 BIT7
#define PIND6 BIT6
#define PIND5 BIT5
#define PIND4 BIT4
#define PIND3 BIT3
#define PIND2 BIT2
#define PIND1 BIT1
#define PIND0 BIT0


// PORTB
#define PORTB7 BIT7
#define PORTB6 BIT6
#define PORTB5 BIT5
#define PORTB4 BIT4
#define PORTB3 BIT3
#define PORTB2 BIT2
#define PORTB1 BIT1
#define PORTB0 BIT0

// PORTC
#define PORTC7 BIT7
#define PORTC6 BIT6
#define PORTC5 BIT5
#define PORTC4 BIT4
#define PORTC3 BIT3
#define PORTC2 BIT2
#define PORTC1 BIT1
#define PORTC0 BIT0

// PORTD
#define PORTD7 BIT7
#define PORTD6 BIT6
#define PORTD5 BIT5
#define PORTD4 BIT4
#define PORTD3 BIT3
#define PORTD2 BIT2
#define PORTD1 BIT1
#define PORTD0 BIT0

// DDRB
#define DDRB7 BIT7
#define DDRB6 BIT6
#define DDRB5 BIT5
#define DDRB4 BIT4
#define DDRB3 BIT3
#define DDRB2 BIT2
#define DDRB1 BIT1
#define DDRB0 BIT0

// DDRC
#define DDRC7 BIT7
#define DDRC6 BIT6
#define DDRC5 BIT5
#define DDRC4 BIT4
#define DDRC3 BIT3
#define DDRC2 BIT2
#define DDRC1 BIT1
#define DDRC0 BIT0

// DDRD
#define DDRD7 BIT7
#define DDRD6 BIT6
#define DDRD5 BIT5
#define DDRD4 BIT4
#define DDRD3 BIT3
#define DDRD2 BIT2
#define DDRD1 BIT1
#define DDRD0 BIT0

// TIFR0 TIFR1 TIFR2 
/*
timer 0 1 and 2 flag registers)
*/
#define OCFB BIT2 // final count sub-timerB
#define OCFA BIT1 // final count sub-timerA 
#define TOV BIT0 // overflow interrupt
// only for TIFR1
#define ICF BIT5

// PCIFR
#define PCIF2 BIT2 // pcints flags (for ports)
#define PCIF1 BIT1 
#define PCIF0 BIT0

// EIFR
#define INTF1 BIT1 // int flags to enable flags of 
#define INTF0 BIT0 // ports, timers, ...

// EIMSK
#define INT1 BIT1 // interrupt controler (enable or disable some interrupts)
#define INT0 BIT0

// EECR
#define EEPM1 BIT5
#define EEPM0 BIT4
#define EERIE BIT3
#define EEMPE BIT2
#define EEPE BIT1
#define EERE BIT0

// EARLX
#define EEAR9 BIT1
#define EEAR8 BIT0 
#define EEAR7 BIT7
#define EEAR6 BIT6
#define EEAR5 BIT5
#define EEAR4 BIT4
#define EEAR3 BIT3
#define EEAR2 BIT2
#define EEAR1 BIT1
#define EEAR0 BIT0

// GTCCR 
#define TSM BIT7
#define PSRASY BIT1
#define PSRSYNC BIT0

// TCCR0A
#define COM0A1 BIT7 // compare register for timer 0A bit H
#define COM0A0 BIT6 // compare register for timer 0A bit L
#define COM0B1 BIT5 // same for timer 0B
#define COM0B0 BIT4
#define WGM01 BIT1 // watchdog count bit H
#define WGM00 BIT0 // "" "" bit L

// TCCR0B
#define FOC0A BIT7
#define FOC0B BIT6
#define WGM02 BIT4
#define CS0_0 0X00      // counting configurations for timers (see datasheet)
#define CS0_1 BIT0
#define CS0_2 BIT1
#define CS0_3 BIT0 | BIT1
#define CS0_4 BIT2
#define CS0_5 BIT2 | BIT0
#define CS0_6 BIT2 | BIT1
#define CS0_7 BIT2 | BIT1 | BIT0

// SPCR0
#define SPIE0 BIT7
#define SPE0 BIT6
#define DORD0 BIT5
#define MSTR0 BIT4
#define CPOL0 BIT3
#define CPHA0 BIT2
#define SPR01 BIT1
#define SPR00 BIT0

// SPDR0 
#define SPIF0 BIT7
#define WCOL0 BIT6
#define SPI2X0 BIT0

// ACSR
#define ACD BIT7
#define ACBG BIT6
#define ACO BIT5
#define ACI BIT4
#define ACIE BIT3
#define ACIC BIT2
#define ACIS1 BIT1
#define ACIS0 BIT0

// SMCR
#define SM2 BIT3 
#define SM1 BIT2
#define SM0 BIT1
#define SE BIT0

// MCUSR
#define WDRF BIT3
#define BORF BIT2
#define EXTRF BIT1
#define PORF BIT0

// MCUCR
#define BODS BIT6
#define BODSE BIT5
#define PUD BIT4
#define IVSEL BIT1
#define IVCE BIT0

// SPMCSR
#define SPMIE BIT7
#define RWWSB BIT6
#define SIGRD BIT5
#define RWWSRE BIT4
#define BLBSET BIT3
#define PDWRT BIT2
#define PGERS BIT1
#define SPMEN BIT0

// SPH
#define SPH_7 BIT0 | BIT1 | BIT2
#define SPH_6 BIT2 | BIT1
#define SPH_5 BIT2 | BIT0
#define SPH_4 BIT2
#define SPH_3 BIT1 | BIT0
#define SPH_2 BIT1
#define SPH_1 BIT0
#define SPH_0 0X00

// SREG
#define I BIT7
#define T BIT6 
#define H BIT5
#define S BIT4
#define V BIT3
#define N BIT2
#define Z BIT1
#define C BIT0

// WDTCSR 
#define WDIF BIT7
#define WDIE BIT6
#define WDCE BIT4
#define WDE BIT3

#define WDP_F BIT5 | BIT2 | BIT1 | BIT0
#define WDP_E BIT5 | BIT2 | BIT1 
#define WDP_D BIT5 | BIT2 | BIT0
#define WDP_C BIT5 | BIT2
#define WDP_B BIT5 | BIT1 | BIT0
#define WDP_A BIT5 | BIT1
#define WDP_9 BIT5 | BIT0
#define WDP_8 BIT5
#define WDP_7 BIT2 | BIT1 | BIT0
#define WDP_6 BIT2 | BIT1
#define WDP_5 BIT2 | BIT0
#define WDP_4 BIT2
#define WDP_3 BIT1 | BIT0
#define WDP_2 BIT1
#define WDP_1 BIT0
#define WDP_0 0X00

// CLKPR 
#define CLKPCE BIT7
#define CLKPS3 BIT3 
#define CLKPS2 BIT2
#define CLKPS1 BIT1
#define CLKPS0 BIT0

// PRR
#define PRTWI0 BIT7
#define PRTIM2 BIT6
#define PRTIM0 BIT5
#define PRTIM1 BIT3
#define PRSPI0 BIT2
#define PRUSART0 BIT1
#define PRADC BIT0

// OSCCAL
#define CAL7 BIT7
#define CAL6 BIT6
#define CAL5 BIT5
#define CAL4 BIT4
#define CAL3 BIT3
#define CAL2 BIT2
#define CAL1 BIT1
#define CAL0 BIT0

// PCICR
#define PCIE2 BIT2
#define PCIE1 BIT1
#define PCIE0 BIT0

// EICRA
#define ISC11 BIT3
#define ISC10 BIT2
#define ISC01 BIT1
#define ISC00 BIT0

// PCMSK0
#define PCINT7 BIT7
#define PCINT6 BIT6
#define PCINT5 BIT5
#define PCINT4 BIT4
#define PCINT3 BIT3
#define PCINT2 BIT2
#define PCINT1 BIT1
#define PCINT0 BIT0

// PCMSK1
#define PCINT14 BIT6
#define PCINT13 BIT5
#define PCINT12 BIT4
#define PCINT11 BIT3
#define PCINT10 BIT2
#define PCINT9 BIT1
#define PCINT8 BIT0

// PCMSK2
#define PCINT23 BIT7
#define PCINT22 BIT6
#define PCINT21 BIT5
#define PCINT20 BIT4
#define PCINT19 BIT3
#define PCINT18 BIT2
#define PCINT17 BIT1
#define PCINT16 BIT0

// TIMSK0 TIMSK1 TIMSK2
#define OCIEB BIT2
#define OCIEA BIT1
#define TOIE BIT0

// TMSK1
#define ICIE BIT5

// ADCL
#define ADC7 BIT7
#define ADC6 BIT6
#define ADC5 BIT5
#define ADC4 BIT4
#define ADC3 BIT3
#define ADC2 BIT2
#define ADC1 BIT1
#define ADC0 BIT0

// ADCH 
#define ADC9 BIT1
#define ADC8 BIT0 

// ADCSRA
#define ADEN BIT7
#define ADSC BIT6
#define ADATE BIT5
#define ADIF BIT4
#define ADIE BIT3
#define ADPS2 BIT2
#define ADPS1 BIT1
#define ADPS0 BIT0

// ADCSRB
#define ACMIE BIT6
#define ADTS2 BIT2
#define ADTS1 BIT1
#define ADTS0 BIT0

// ADMUX 
#define REFS1 BIT7
#define REFS0 BIT6
#define ADLAR BIT5
#define MUX3 BIT3
#define MUX2 BIT2
#define MUX1 BIT1
#define MUX0 BIT0

// DIDR0
#define ADC7D BIT7
#define ADC6D BIT6
#define ADC5D BIT5
#define ADC4D BIT4
#define ADC3D BIT3
#define ADC2D BIT2
#define ADC1D BIT1
#define ADC0D BIT0

// DIDR1
#define AIN1D BIT1
#define AIN0D BIT0

// TCCR1A
#define COM1 BIT7 | BIT6 | BIT5 | BIT4
#define WGM11 BIT1
#define WGM10 BIT0

// TCCR1B
#define ICNC1 BIT7
#define ICES1 BIT6
#define WGM13 BIT4
#define WGM12 BIT3
#define CS12 BIT2
#define CS11 BIT1
#define CS10 BIT0

// TCCR1C
#define FOC1A BIT7
#define FOC1B BIT6

// TCCR2A
#define COM2A1 BIT7
#define COM2A0 BIT6
#define COM2B1 BIT5
#define COM2B0 BIT4
#define WGM21 BIT1
#define WGM20 BIT0

// TCCR2B
#define FOC2A BIT7
#define FOC2B BIT6
#define WGM22 BIT3
#define CS2_0 0X00
#define CS2_1 BIT0
#define CS2_2 BIT1
#define CS2_3 BIT0 | BIT1
#define CS2_4 BIT2
#define CS2_5 BIT2 | BIT0
#define CS2_6 BIT2 | BIT1
#define CS2_7 BIT2 | BIT1 | BIT0

// ASSR
#define EXCLK BIT6
#define AS2 BIT5
#define TCN2UB BIT4
#define OCR2AUB BIT3
#define OCR2BUB BIT2
#define TCR2AUB BIT1
#define TCR2BUB BIT0

// TWBR
#define TWBR7 BIT7
#define TWBR6 BIT6
#define TWBR5 BIT5
#define TWBR4 BIT4
#define TWBR3 BIT3
#define TWBR2 BIT2
#define TWBR1 BIT1
#define TWBR0 BIT0

// TWSR
#define TWS4 BIT7
#define TWS3 BIT6
#define TWS2 BIT5
#define TWS1 BIT4
#define TWS0 BIT3
#define TWPS1 BIT1
#define TWPS0 BIT0

// TWAR
#define TWA7 BIT7
#define TWA6 BIT6
#define TWA5 BIT5
#define TWA4 BIT4
#define TWA3 BIT3 
#define TWA2 BIT2
#define TWA1 BIT1
#define TWGCE BIT0

// TWDR
#define TWD7 BIT7
#define TWD6 BIT6
#define TWD5 BIT5
#define TWD4 BIT4
#define TWD3 BIT3
#define TWD2 BIT2
#define TWD1 BIT1
#define TWD0 BIT0

// TWCR
#define TWINT BIT7
#define TWEA BIT6
#define TWSTA BIT5
#define TWSTO BIT4
#define TWWC BIT3
#define TWEN BIT2
#define TWIE BIT0

// TWAMR
#define TWAM6 BIT7
#define TWAM5 BIT6
#define TWAM4 BIT5
#define TWAM3 BIT4
#define TWAM2 BIT3
#define TWAM1 BIT2
#define TWAM0 BIT1

// UCSR0A
#define RXC0 BIT7
#define TXC0 BIT6
#define UDRE0 BIT5
#define FE0 BIT4
#define DOR0 BIT3
#define UPE0 BIT2
#define U2X0 BIT1
#define MPCM0 BIT0

// UCSR0B
#define RXCIE0 BIT7
#define TXCIE0 BIT6
#define UDRIE0 BIT5
#define RXEN0 BIT4
#define TXEN0 BIT3
#define UCSZ02 BIT2
#define RXB80 BIT1
#define TXB80 BIT0

// UCSR0C
#define UMSEL01 BIT7 
#define UMSEL00 BIT6
#define UPM01 BIT5
#define UPM00 BIT4
#define USBS0 BIT3
#define UCSZ01 BIT2
#define UDORD0 BIT2
#define UCSZ00 BIT1
#define UCPHA0 BIT1
#define UCPOL0 BIT0

// UBRR0H
#define UBRR0_F BIT3 | BIT2 | BIT1 | BIT0
#define UBRR0_E BIT3 | BIT2 | BIT1
#define UBRR0_D BIT3 | BIT2 | BIT0
#define UBRR0_C BIT3 | BIT2
#define UBRR0_B BIT3 | BIT1 | BIT0
#define UBRR0_A BIT3 | BIT1
#define UBRR0_9 BIT3 | BIT0
#define UBRR0_8 BIT3 
#define UBRR0_7 BIT2 | BIT1 | BIT0
#define UBRR0_6 BIT2 | BIT1
#define UBRR0_5 BIT2 | BIT0 
#define UBRR0_4 BIT2
#define UBRR0_3 BIT1 | BIT0 
#define UBRR0_2 BIT1 
#define UBRR0_1 BIT0 
#define UBRR0_0 0x00

#endif // BITS_H
