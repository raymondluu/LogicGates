// logic.c displays the Truth Tables for these logic simulations

#include <stdio.h>
#include "bit_def.h"

int main(void) {
    bit a;
    a = 0x00;
	
	bit b;
	b = 0x00;
	
	bit a1;
	a1 = 0x01;
	
	bit b1;
	b1 = 0x01;

	printf("\nAND GATE\n");
	printf("a   b   r\n");
	printf("-----------\n");
    printf("%d   %d   %d\n",a, b, and(a, b));
	printf("%d   %d   %d\n",a, b1, and(a, b1));
	printf("%d   %d   %d\n",a1, b, and(a1, b));
	printf("%d   %d   %d\n",a1, b1, and(a1, b1));
	
	printf("\nOR GATE\n");
	printf("a   b   r\n");
	printf("-----------\n");
    printf("%d   %d   %d\n",a, b, or(a, b));
	printf("%d   %d   %d\n",a, b1, or(a, b1));
	printf("%d   %d   %d\n",a1, b, or(a1, b));
	printf("%d   %d   %d\n",a1, b1, or(a1, b1));
	
	printf("\nNOT GATE\n");
	printf("a   r\n");
	printf("-----------\n");
    printf("%d   %d\n",a, not(a));
	printf("%d   %d\n",a1, not(a1));
	
	printf("\nXOR GATE\n");
	printf("a   b   r\n");
	printf("-----------\n");
    printf("%d   %d   %d\n",a, b, xor(a, b));
	printf("%d   %d   %d\n",a, b1, xor(a, b1));
	printf("%d   %d   %d\n",a1, b, xor(a1, b));
	printf("%d   %d   %d\n",a1, b1, xor(a1, b1));
	
	printf("\nNOR GATE\n");
	printf("a   b   r\n");
	printf("-----------\n");
    printf("%d   %d   %d\n",a, b, nor(a, b));
	printf("%d   %d   %d\n",a, b1, nor(a, b1));
	printf("%d   %d   %d\n",a1, b, nor(a1, b));
	printf("%d   %d   %d\n",a1, b1, nor(a1, b1));
	
	printf("\nNAND GATE\n");
	printf("a   b   r\n");
	printf("-----------\n");
    printf("%d   %d   %d\n",a, b, nand(a, b));
	printf("%d   %d   %d\n",a, b1, nand(a, b1));
	printf("%d   %d   %d\n",a1, b, nand(a1, b));
	printf("%d   %d   %d\n",a1, b1, nand(a1, b1));
	
		printf("\n~(~(a)|~(b))\n");
	printf("a   b   r\n");
	printf("-----------\n");
    printf("%d   %d   %d\n",a, b, not(or(not(a), not(b))));
	printf("%d   %d   %d\n",a, b1, not(or(not(a), not(b1))));
	printf("%d   %d   %d\n",a1, b, not(or(not(a1), not(b))));
	printf("%d   %d   %d\n",a1, b1, not(or(not(a1), not(b1))));
}