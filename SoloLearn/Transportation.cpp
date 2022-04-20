#include <iostream>

int outputCalc(int& myInput)
{
    int myOutput = 0;
    int busSize = 50;

    if(myInput < busSize)
    {
        myOutput = busSize - myInput; 
    }

    else
    {
        myOutput = busSize - (myInput % busSize);
    }   
    
    return myOutput;
}

int main() 
{
    int myInput = 0;
    std::cin >> myInput;

    int thisOutput = outputCalc(myInput); 
    std::cout << thisOutput << std::endl; 
    return 0;
}
