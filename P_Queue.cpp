#include <iostream>
#include <queue>
#include <functional>
#include <string> 
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>
#include <unordered_map>

// distance calculation function 
double calcDist(int X_2, int Y_2)
{
    //  sqrt( (X_2 - X_1)^2  + (Y_2 - Y_1)^2 )
    int X_1 = 0; 
    int Y_1 = 0; 
    double X_calc = pow(X_2 - X_1, 2); 
    double Y_calc = pow(Y_2 - Y_1, 2);
    double finalCalc = sqrt( X_calc + Y_calc); 
    return finalCalc; 
}


bool myBoolFunc( std::pair<std::vector<int>, double> const& a, std::pair<std::vector<int>, double> const& b )
{
    return a.second > b.second;
}

class myComp 
{
    public:
    constexpr bool operator()( std::pair<std::vector<int>, double> const& a, std::pair<std::vector<int>, double> const& b)
    
    const noexcept
    {
        return a.second > b.second;
    }
};


int main()
{
    std::cout  << "Hello World" << std::endl; 
    std::cout << "Default min heap" << std::endl; 
    std::priority_queue<int, std::vector<int>, std::greater<int>> myMinHeap;
    std::priority_queue<int> myMaxHeap;

    std::priority_queue<std::pair<std::vector<int>, double>, std::vector<std::pair<std::vector<int>, double>>, myComp> compPQ; 
    std::vector<std::vector<int>> locations { {1,2}, {3,1}, {2,2}, {9,0} };
    std::vector<double> doubVec{1.1, 2.8, 3.1, 4.2}; 

    for(int i = 0; i < locations.size(); i++)
    {
        std::pair<std::vector<int>, double> tempPair = std::make_pair(locations[i], doubVec[i]); 
        compPQ.push(tempPair); 
    }

    // add to complex queue 
    std::endl (std::cout); 

    std::vector<std::vector<int>> ReturnVec; 

    std::cout << "Printing Complex PQ_Heap" << std::endl; 
    while(!compPQ.empty())
    {
        for(auto& i: compPQ.top().first)
        {
            std::cout << i << " "; 
        }

        ReturnVec.push_back(compPQ.top().first); 

        std::endl (std::cout);

        //std::cout << compPQ.top().first << std::endl;
        std::cout << "Double Value " << compPQ.top().second << std::endl;
        compPQ.pop(); 

    }

    std::cout << " Print out return Vector" << std::endl;

    for(int i = 0; i < ReturnVec.size(); i++)
    {
        for(int j = 0; j < ReturnVec[i].size(); j++)
        {
            std::cout << ReturnVec[i][j] << " ";
        }
        std::endl (std::cout); 

    }

    std::endl (std::cout); 


    myMinHeap.push(1);
    myMinHeap.push(9);
    myMinHeap.push(2);
    myMinHeap.push(3);
    myMinHeap.push(7);
    myMinHeap.push(5);

    myMaxHeap.push(1);
    myMaxHeap.push(9);
    myMaxHeap.push(2);
    myMaxHeap.push(3);
    myMaxHeap.push(7);
    myMaxHeap.push(5);

    //std::cout << "Printing min heap" << std::endl; 

    while(!myMinHeap.empty())
    {
        //std::cout << myMinHeap.top() << std::endl;
        myMinHeap.pop(); 
    }

    //std::endl (std::cout); 

    //std::cout << "Printing max heap" << std::endl; 

    while(!myMaxHeap.empty())
    {
      //  std::cout << myMaxHeap.top() << std::endl;
        myMaxHeap.pop(); 
    }

    int myX = 1;
    int myY = 2; 

    std::cout << " Distance calc" << calcDist(myX, myY) << std::endl; 
    

}