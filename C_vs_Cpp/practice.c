#include <stdio.h>


int main() 
{
    
    #define BIT3 (0x1 << 2) // 0001 -- > 0100
    int myNum = 0xE5; // 1110 0101 (E,5) invert bit --> 0101 0101 (5,5)
                      // 
                      // 1101 1010 -- > final result (D,A)
                      // 1010 0101 - result I want 
                      // myNum xor mask 
    int myMask = 0x0F; 
    myNum = myNum | BIT3;
    int result = myNum ^ myMask;

    // swap every two bits
    









    printf("Result of mask %x ", result); 


	return 0;
}