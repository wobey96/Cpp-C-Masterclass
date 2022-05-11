#include <iostream>
#include <string> 
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>
#include <unordered_map>
#include <utility>


std::vector<std::vector<int>> returnVector
{
    std::vector<std::vector<int>> myVector{}
}

int main()
{
    std::array<std::array<int,3>, 3> myMatrix = { { {1,2,3},
                                                    {4,5,6},
                                                    {7,8,9}
     }                                           };

    for(int i = 0; i < myMatrix.size(); i++)
    {
        for(int j = 0; j < myMatrix[i].size(); j++)
        {
            std::cout << "\t my Array at myMatrix[" << i << "]" << "[" << j << "]" << "\t" << myMatrix[i][j]; 
        }
        std::endl (std::cout);
    }

    std::cout << "Next array " << std::endl;

    std::endl (std::cout); 

    std::array<std::array<int,3>, 3> myMatrix2 = {1,1,1,2,2,2,3,3,3};
    for(auto& k: myMatrix2)
    {
        for(auto& l: k)
        {
            std::cout << l << std::endl;
        }
    }
}