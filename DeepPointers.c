#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /*
    int n; 
    printf("Enter sizeof array \n");\
    scanf("%d", &n); 
    int* A = (int*)malloc(n*sizeof(int)); 
    for(int i = 0; i < n; i++)
    {
        A[i] = i+1; 
    }
    for(int i = 0; i < n; i++)
    */
   char c1[6] = "Hello"; 
   char* c2;
   c2 = c1; 
   printf("c2[0] %c \n", c2[0]);
   c2[0] = 'A'; 
   printf("C2 string is %s \n",c2); 
    return 0;
}
