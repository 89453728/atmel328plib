/*
* MAP.H 
*
* Atmel atmega328p map macros memory access.
* License MIT.
* This file contains registers memory position of
* memory system of atmel atmega328p 
* Author: Achengli, Yassin
*/

// to include stdint.h
#include <bit.h>

#ifndef MAP_H
#define MAP_H 

// macro that cast number into address locator in micro
#define ADDR_BYTE(addr) (*(volatile uint8_t *)(addr))

// Port status (read)
#define PINB                    ADDR_BYTE(0x23)
#define PINC                    ADDR_BYTE(0x26)
#define PIND                    ADDR_BYTE(0x29)

// Register to write value into a external port
#define PORTB                   ADDR_BYTE(0x25)
#define PORTC                   ADDR_BYTE(0x28)
#define PORTD                   ADDR_BYTE(0x2b)
// Set port as input or output
#define DDRB                    ADDR_BYTE(0x24)
#define DDRC                    ADDR_BYTE(0x27)
#define DDRD                    ADDR_BYTE(0x2a)
// timers interrupt flag registers 
#define TIFR0                   ADDR_BYTE(0x35)
#define TIFR1                   ADDR_BYTE(0x36)
#define TIFR2                   ADDR_BYTE(0x37)

#define PCIFR                   ADDR_BYTE(0x3b)
#define EIFR                    ADDR_BYTE(0x3c)
#define EIMSK                   ADDR_BYTE(0x3d) 
#define EECR                    ADDR_BYTE(0x3f)
#define EEDR                    ADDR_BYTE(0x40)
#define EEARL                   ADDR_BYTE(0x41)
#define EEARH                   ADDR_BYTE(0x42)
#define GTCCR                   ADDR_BYTE(0x43)
#define TCCR0A                  ADDR_BYTE(0x44)
#define TCCR0B                  ADDR_BYTE(0x45)
#define TCNT0                   ADDR_BYTE(0x46)
#define OCR0A                   ADDR_BYTE(0x47)
#define OCR0B                   ADDR_BYTE(0x48)

#define GPIOR0                  ADDR_BYTE(0x3e)
#define GPIOR1                  ADDR_BYTE(0x4a)
#define GPIOR2                  ADDR_BYTE(0x4b)

#define SPCR0                   ADDR_BYTE(0x4c)
#define SPSR0                   ADDR_BYTE(0x4d)
#define SPDR0                   ADDR_BYTE(0x4e)

#define ACSR                    ADDR_BYTE(0x50)
#define DWDR                    ADDR_BYTE(0x51)

#define SMCR                    ADDR_BYTE(0x53)
#define MCUSR                   ADDR_BYTE(0x54)
#define MCUCR                   ADDR_BYTE(0x55)

#define SPMCSR                  ADDR_BYTE(0x57)

#define SPL                     ADDR_BYTE(0x5d)
#define SPH                     ADDR_BYTE(0x5e)
#define SREG                    ADDR_BYTE(0x5f)
#define WDTCSR                  ADDR_BYTE(0x60)
#define CLKPR                   ADDR_BYTE(0x61)

#define PRR                     ADDR_BYTE(0x64)

#define OSCCAL                  ADDR_BYTE(0x66)

#define PCICR                   ADDR_BYTE(0x68)
#define EICRA                   ADDR_BYTE(0x69)

#define PCMSK0                  ADDR_BYTE(0x6b)
#define PCMSK1                  ADDR_BYTE(0x6c)
#define PCMSK2                  ADDR_BYTE(0x6d)
#define TIMSK0                  ADDR_BYTE(0x6e)
#define TIMSK1                  ADDR_BYTE(0x6f)
#define TIMSK2                  ADDR_BYTE(0x70)

#define ADCL                    ADDR_BYTE(0x78)
#define ADCH                    ADDR_BYTE(0x79)
#define ADCSRA                  ADDR_BYTE(0x7a)
#define ADCSRB                  ADDR_BYTE(0x7b)
#define ADMUX                   ADDR_BYTE(0x7c)

#define DIDR0                   ADDR_BYTE(0x7e)
#define DIDR1                   ADDR_BYTE(0x7f)
#define TCCR1A                  ADDR_BYTE(0x80)
#define TCCR1B                  ADDR_BYTE(0x81)
#define TCCR1C                  ADDR_BYTE(0x82)

#define TCNT1L                  ADDR_BYTE(0x84)
#define TCNT1H                  ADDR_BYTE(0x85)
#define ICR1L                   ADDR_BYTE(0x86)
#define ICR1H                   ADDR_BYTE(0x87)
#define OCR1AL                  ADDR_BYTE(0x88)
#define OCR1AH                  ADDR_BYTE(0x89)
#define OCR1BL                  ADDR_BYTE(0x8a)
#define OCR1BH                  ADDR_BYTE(0x8b)

#define TCCR2A                  ADDR_BYTE(0xb0)
#define TCCR2B                  ADDR_BYTE(0xb1)
#define TCNT2                   ADDR_BYTE(0xb2)
#define OCR2A                   ADDR_BYTE(0xb3)
#define OCR2B                   ADDR_BYTE(0xb4)

#define ASSR                    ADDR_BYTE(0xb6)

#define TWBR                    ADDR_BYTE(0xb8)
#define TWSR                    ADDR_BYTE(0xb9)
#define TWAR                    ADDR_BYTE(0xba)
#define TWDR                    ADDR_BYTE(0xbb)
#define TWCR                    ADDR_BYTE(0xbc)
#define TWAMR                   ADDR_BYTE(0xbd)

#define UCSR0A                  ADDR_BYTE(0xc0)
#define UCSR0B                  ADDR_BYTE(0xc1)
#define UCSR0C                  ADDR_BYTE(0xc2)

#define UBRR0L                  ADDR_BYTE(0xc4)
#define UBRR0H                  ADDR_BYTE(0xc5)
#define UDR0                    ADDR_BYTE(0xc6)

#endif // MAP_H
