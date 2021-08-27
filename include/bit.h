/*
* BIT.H 
*
* Atmel atmega328p map macros memory access.
* MIT license.
* This file contains bits of register positions
* for propose to access to those points and 
* modify the value of some functionality of 
* atmel atmega 328p 
* 
* Dev: Achengli, Yassin
*/

#ifndef BIT_H
#define BIT_H
#include <stdint.h>
/* macro for casting number into uint8_t type data
*  its for accessing as a byte
*/
#define BYTE_CAST(byte_d) ((uint8_t) (byte_d))
/* macro similar as the previous one but its for 
*  word data (2 bytes length)
*/
#define WORD_CAST(word_d) ((uint16_t) (word_d))

// bit nums

#define BIT0    BYTE_CAST(0b00000001)
#define BIT1    BYTE_CAST(0b00000010)
#define BIT2    BYTE_CAST(0b00000100)
#define BIT3    BYTE_CAST(0b00001000)
#define BIT4    BYTE_CAST(0b00010000)
#define BIT5    BYTE_CAST(0b00100000)
#define BIT6    BYTE_CAST(0b01000000)
#define BIT7    BYTE_CAST(0b10000000)
#define BIT8    WORD_CAST(0b0000000100000000)
#define BIT9    WORD_CAST(0b0000001000000000)
#define BITA    WORD_CAST(0b0000010000000000)
#define BITB    WORD_CAST(0b0000100000000000)
#define BITC    WORD_CAST(0b0001000000000000)
#define BITD    WORD_CAST(0b0010000000000000)
#define BITE    WORD_CAST(0b0100000000000000)
#define BITF    WORD_CAST(0b1000000000000000)

#endif // BIT_H
