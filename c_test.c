#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    /*
  char Src[15]= "educative";
  char Dest[15] = "";
  printf("Before copying\n");
  printf("Source string: %s \n", Src);
  printf("Destination string: %s \n\n", Dest);
  
  strcpy(Dest, Src);   // calling strcpy function
  printf("After copying\n");
  printf("Source string: %s \n", Src);
  printf("Destination string: %s \n", Dest);
    */

   char name[] = "Wallace"; 
   printf("My name is %s \n", name); 

   printf("Renaming my name\n"); 
   scanf("%s", name);

   printf("My new name %s\n", name);
  return 0;
}





