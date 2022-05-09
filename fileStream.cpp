#include <iostream>
#include <fstream> 

int main()
{
    std::ofstream MyFile; 
    MyFile.open("test.txt"); 
    MyFile << "Some text. " << std::endl; 
    MyFile.close(); 
    return 0; 
}