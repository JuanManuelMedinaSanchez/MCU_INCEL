/*
------------------------------------------------------------------------------------------
Una bandera of flag puede ser un bit o un conjunto de bits que se utilizan para indicar 
un estado o una condición particular dentro de un sistema o una estructura de datos.
------------------------------------------------------------------------------------------
*/
#include <stdio.h>

int main() {
    unsigned int flags = 0b00000000; // Initialize flags variable with all bits set to 0
    // Set bits at positions 2 and 4 (0-based index) using binary representations
    unsigned int bitMask = 0b00000100 | 0b00010000; // Binary: 00000100 | 00010000
    flags |= bitMask;
    // Output the updated value of 'flags' in binary format
    printf("Updated flags: %08b\n", flags);

    return 0;
}
