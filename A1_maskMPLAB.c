/* 
 * Desarrollo / Autoria, Juan Manuel Medina, mail to juansth@gmail.com
 * Processor: PIC16F877A
 * Compiler:  MPLAB XC8
 */

#define _XTAL_FREQ 800000

#include <xc.h>
#include <stdint.h>



void main() {
    TRISB = 0x00; // Set all pins of PORTB as outputs
    uint8_t mask = 0b00110011; // Define a mask to specify RB0, RB1, RB4, and RB5

    while (1) {
        // Set specific pins on PORTB using the mask
        PORTB |= mask;

        __delay_ms(500); // Delay for 500 milliseconds

        // Clear specific pins on PORTB using the mask
        PORTB &= ~mask;

        __delay_ms(500); // Delay for 500 milliseconds
    }
}
