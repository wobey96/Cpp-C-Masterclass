#include <iostream>
#include <string> 
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>
#include <unordered_map>
#include <utility>


int main()
{
    std::unordered_map<int, std::vector<int>> myGraph; 
    std::cout << "Hello World" << std::endl; 
    
    std::vector<int> myVec1{1,2,4,6};
    std::vector<int> myVec2{1,2,4,6};
    std::vector<int> myVec3{1,2,4,6};
    std::vector<int> myVec4{1,2,4,6};
    std::vector<int> myVec5{1,2,4,6};

    myGraph.insert(std::make_pair(1, std::move(myVec1))); 
    myGraph.insert(std::make_pair(2, std::move(myVec2)));
    myGraph.insert(std::make_pair(3, std::move(myVec3)));
    myGraph.insert(std::make_pair(4, std::move(myVec4)));
    myGraph.insert(std::make_pair(5, std::move(myVec5))); 

    for(auto& i: myGraph)
    {
        std::cout << "first " << i.first << std::endl; 
        for(int j = 0; j < i.second.size(); j++)
        {
            std::cout << " Second " << i.second[j] << " ";
        }

        std::endl (std::cout); 
    }

    
}