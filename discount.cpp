#include <iostream> 

int main()
{
    int ages[5];

    for (int i = 0; i < 5; ++i) {
        std::cin >> ages[i];
    }
    //your code goes here
    double min = ages[0];

    for(int i = 1; i < 5; i++)
    {
        if(ages[i] < min)
        {
            min = ages[i];
        }
    }

    std::cout << " min " << min << std::endl; 

    double discountPercent = min / 100.0;
    std::cout << " discountPercent " << discountPercent << std::endl; 


    double myDiscount = (50 * discountPercent);
    std::cout << " myDiscount " << myDiscount << std::endl;

    double totalPrice = (50 - myDiscount);
    std::cout << " totalPrice " << totalPrice << std::endl;

    return 0;
}