#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    u_int32_t myNumber = 0xFF; 
    u_int32_t bitPosition = 2; 

    printf("bit = 0x%d myNumber = 0x%02x\n\r", bitPosition, myNumber); 
    myNumber = myNumber & ~(1<< bitPosition);
    printf("bit cleared = 0x%02x\n\r", myNumber); 
    return 0;
}





