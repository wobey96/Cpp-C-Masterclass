#include <iostream>
constexpr double GetPi() { return 22.0 / 7.0; }
constexpr double TwicePi() { return 2 * GetPi(); }

int main()
{
    const double pi = 22.0 / 7.0;

    std::cout << "constant pi contains value " << pi << std::endl;
    std::cout << "constexpr GetPi() returns value " << GetPi() << std::endl;
    std::cout << "constexpr TwicePi() returns value " << TwicePi() << std::endl;  
}