#include <iostream>
#include <vector> 
#include <array> 

int main()
{
    std::array<int, 4> myModernArray{1,2,3,4}; 
    for(auto& i: myModernArray)
    {
        std::cout << i << std::endl; 
    }

    std::endl (std::cout); 

    std::vector<int> myVect{1,3,5,6};
    for(auto& j: myVect)
    {
        std::cout << j << std::endl;
    }
}