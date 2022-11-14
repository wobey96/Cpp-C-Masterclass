#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void BitManip(uint32_t* myNum, uint32_t bitPos)
{
    printf(" Bit = 0x%d myNum = 0x%02x\n\r ", bitPos, *myNum);
    *myNum = *myNum & ~(1 << bitPos); // shifting 1 over the amount of bitPos times; if bitPos = 3 then left shit 1 over 3 times 
    printf(" Bit cleared = 0x%02X\n\r ", *myNum);  
}

int main(int argc, char* argv[])
{
    uint32_t num = 0xFF;
    for(int i = 0; i < 5; i++)
    {
        BitManip(&num, i);
        num = 0xFF; 
    }

    return 0;
}