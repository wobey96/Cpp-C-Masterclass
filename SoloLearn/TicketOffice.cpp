#include <iostream>
using namespace std;

int main() {
    int ages[5];

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
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

    double discountPercent = min / 100.0;
    double myDiscount = 50 * discountPercent;

    double totalPrice = 50 - myDiscount;

    std::cout << totalPrice << std::endl; 
    
    return 0;
}
