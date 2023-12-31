/* 
 * Desarrollo / Autoria, Juan Manuel Medina, mail to juansth@gmail.com
 * Processor: PIC16F877A
 * Compiler:  MPLAB XC8
 */

 #define _XTAL_FREQ  800000
 #include <xc.h>
#include <stdint.h>

// Configuration settings
#pragma config FOSC = HS   // High-Speed Crystal Oscillator
#pragma config WDTE = OFF  // Watchdog Timer disabled
#pragma config PWRTE = ON  // Power-up Timer enabled
#pragma config BOREN = OFF // Brown-out Reset disabled
#pragma config LVP = OFF   // Low-Voltage Programming disabled
#pragma config CPD = OFF   // Data Memory Code Protection disabled
#pragma config CP = OFF    // Code Protection disabled

void main() {
    TRISB = 0x00; // Set all pins of PORTB as outputs

    while (1) {
        PORTB = 0xFF; // Turn on all LEDs on PORTB
        __delay_ms(500); // Delay for 1 second
        PORTB = 0x00; // Turn off all LEDs on PORTB
        __delay_ms(500); // Delay for 1 second
    }
}
