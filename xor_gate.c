// xor_gate.c simulates a bitwise xor

#include <stdio.h>
#include "bit_def.h"

bit xor(bit a, bit b) {
    bit r;

    a = maskBit(a);    // make sure no spurious bits get by!
	b = maskBit(b);
    r = a ^ b;

    return r;
}

// test driver code for XOR. This can be expanded to complete this assignment
// Remember to comment this section out when compiling to an object file.
/*int main(void) {
    bit a;
    a = 0x01;
	bit b;
	b = 0x01;

    printf("%d XOR %d = %d\n",a, b, xor(a, b));
}*/