#include <iostream>
#include <queue>
#include <functional>
#include <string> 
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>
#include <unordered_map>

////////
// 0x1|0x2|nullptr|0x3|0x4|0x5| |

int main()
{
    const int myFillNum = 27;

    std::cout << "Hello World" << std::endl;
    std::array<int, 10> myArray{ 1, 0, 3, 6, 7, 4, 9, 6, 8, 1};  
    std::array<int, 5> mySecondArray{ 1,2,7,1,6};

    std::unordered_map<int, int> myMap;


    std::cout  << "filling map" << std::endl; 
    //fill map 
    for(int i = 0; i < myArray.size(); i++)
    {
        // iterator creation 
        std::unordered_map<int, int>::const_iterator pairFound = myMap.find(i);
        
        if(pairFound != myMap.end())
        {
            std::cout << " Key is in our map " << std::endl; 
        }
        else
        {
            std::cout << "Key not in our map. adding key and value now " << std::endl; 
            myMap.insert(std::make_pair(i, myArray[i]));
        }
    }    

    std::cout << "displaying map" << std::endl; 

    for(auto& i: myMap)
    {
        std::cout << " key " << i.first << std::endl; 
        std::cout << " value " << i.second << std::endl; 
    }

    std::cout << " Map Value " << myMap.at(3);

    std::endl (std::cout); 

    std::fill(mySecondArray.begin(), mySecondArray.end(), myFillNum); 

    std::cout << "Sorting" << std::endl; 
    std::sort(myArray.begin(), myArray.end()); 

    for(auto& i: myArray)
    {
        std::cout << i << std::endl; 
    }

    std::endl (std::cout); 

    for(auto& j: mySecondArray)
    {
        std::cout << j << std::endl; 
    }
}