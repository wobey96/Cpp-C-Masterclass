#include <iostream>
#include <queue>
#include <functional>
#include <string> 
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>
#include <unordered_map>

/*
Problem Statement: 
You're working for a company and a user does a query about the top N vegan restaurants near them. 
You are given a 2D vector of coordinates x,y symbolizing the locations of all restaurants. 
Your task is to return a 2D vector with N coordinates that are closes to the user.  
*/

// function object for specifying the second parameter of the heap to be used in comparison  
class myComp 
{
    public:
    constexpr bool operator()( std::pair<std::vector<int>, double> const& a, std::pair<std::vector<int>, double> const& b)
    const noexcept
    {
        return a.second > b.second;
    }
    /*
    This also works if you dont wanna do constexpr: 
    bool operator(same parameters as above)
    {
        return a.second > b.second; 
    } 
    */
};

// Helper function for Calculating the distance of each location
double calcDist(std::vector<int> &currLocation) // {1,2} [0][0], [0][1]
{
    int X_2 = currLocation[0]; // x
    int Y_2 = currLocation[1]; // y
    int X_1 = 0;
    int Y_1 = 0; 
    double X_calc = pow(X_2 - X_1, 2); 
    double Y_calc = pow(Y_2 - Y_1, 2);
    double finalCalc = sqrt( X_calc + Y_calc); 
    return finalCalc; 
}

// Helper function for filling the return vector 

std::vector<std::vector<int>> returnDistance(std::vector<std::vector<int>> &allLocations, int numRestaurants)
{
    // data structrues we need: 

    // Min Heap 
    std::priority_queue<std::pair<std::vector<int>, double>, std::vector<std::pair<std::vector<int>, double>>, myComp> compPQ;

    // Vector for intermediate and final processing
    std::vector<std::vector<int>> ReturnVec;
    std::vector<double> distCalcVec;

    // fill distance calculated vector first intermediate processing
    for(auto&  i : allLocations)
    {
            distCalcVec.push_back(calcDist(i)); // O(n) times 
    }

     /*
    fill Min Heap 
    */ 
   for(int i = 0; i < allLocations.size(); i++)
   {
       std::pair<std::vector<int>, double> tempPair = std::make_pair(allLocations[i], distCalcVec[i]); 
       compPQ.push(tempPair);  // log(n) but we do this N times b/c of the loop so its O(nlogn)
   }

    /*
    Then we need to fill return vector N times from Min Heap 
    */
   int addCount = 0; 
   while(addCount < numRestaurants)
   {
       ReturnVec.push_back(compPQ.top().first); // M times 
       compPQ.pop(); 
       addCount++; 
   }

   /*
    Display the return vector 
    */
   std::cout << "Displaying final return Vector" << std::endl; 

   for(auto& i: ReturnVec)
   {
       for(auto& j: i)
       {
           std::cout << j << " ";
       }
       std::endl (std::cout); 
   }

    /*
    Return the vector 
    */
   return ReturnVec; 
}

int main()
{
    // Test 
    std::cout<< "The Test For This" << std::endl;
    int locAmount = 3; // M <= N
    std::vector<std::vector<int>> allLocations{ {1,2}, {3,8}, {2,1}, {1,1}, {9,3}, {6,4}, {8,9}, {2,2}, }; 
    std::vector<std::vector<int>> userQuery = returnDistance(allLocations, locAmount); 

    std::endl (std::cout); 

    std::vector<std::vector<int>> correctVector{ {1,1}, {2,1}, {1,2} };

    std::cout << "TEST Result" << std::endl; 
    for(auto& i: userQuery)
    {
        for(auto& j: i)
        {
            std::cout << j << " ";
        }
        std::endl (std::cout); 
    }

    if(correctVector == userQuery)
    {
        std::cout << "PASSED" << std::endl;
        std::endl (std::cout); 
    }
    else
    {
        std::cout << "FAIL" << std::endl;
        std::endl (std::cout); 
    }
}