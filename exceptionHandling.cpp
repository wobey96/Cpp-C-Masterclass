#include <iostream>

int main()
{
    try
    {
        int num1;
        int num2; 

        std::cout << "Enter num1 " << std::endl; 
        std::cin >> num1; 

        std::cout << "Enter num2 " << std::endl; 
        std::cin >> num2; 

        if(num2 == 0)
        {
            throw 0; 
        }

        std::cout << "Results " << num1 / num2 << std::endl;
    }

    catch(...) // (...) ellipsis for catching any exception
    {
        std::cout << "Divide by Zero Error" << std::endl;
    }

     

    return 0;
}