#include <iostream>
#include <queue>
#include <functional>
#include <string> 
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>
#include <unordered_map>
#include <unordered_set>

using namespace std;

/*
Suppose we have some input data describing a graph of relationships between parents and children over multiple families and generations. The data is formatted as a list of (parent, child) pairs, where each individual is assigned a unique positive integer identifier.

For example, in this diagram, 3 is a child of 1 and 2, and 5 is a child of 4:

1   2    4           30
 \ /   /  \           \ 
  3   5    9  15      16
   \ / \    \ / 
    6   7   12  


Sample input/output (pseudodata):

pairs = [
    (5, 6), (1, 3), (2, 3), (3, 6), (15, 12),
    (5, 7), (4, 5), (4, 9), (9, 12), (30, 16)
]


Write a function that takes this data as input and returns two collections: one containing all individuals with zero known parents, and one containing all individuals with exactly one known parent.


Output may be in any order:

findNodesWithZeroAndOneParents(pairs) => 
[
  [1, 2, 4, 15, 30],   // Individuals with zero parents
  [5, 7, 9, 16]        // Individuals with exactly one parent
]

Complexity Analysis variables:

n: number of pairs in the input

*/


/* 
ZeroParentVector[1,2,15,4,30] - unordered_set 
OneParentVector[5,7,9,16] - unordered_set 
multipleParents[3,12] - unordered_set 

1.) build Map, ZeroParent, and OneParent, multipleParents
Map[key - Vector]
    5   - [6,7]
    1   - [3]
    2   - [3]
    3   - [6]
    15  - [12]
    4   - [5,9]
    9   - [12]
    30  - [16]

  Map[key - Vector]
  5   - [6,7]
  1   - [3]
  2   - [3]
  3   - [6]
  15  - [12]
  4   - [5,9]
  9   - [12]
  30  - [16]

2.)countapparances 
currKey = map[i]
find(map[i].vec[])

3.)

4.)
*/

void buildZeroAndOneVectors(std::unordered_map<int, std::vector<int>> &myGraph, std::vector<std::pair<int, int>> &relationshipList)
{
  
  int appCount = 0;  

  //logic for adding to caches
}


int main() 
{
  //std::vector<int> parents{5,1,2,3,15,4,9,30}; 

  /*
  ZeroParentVector[1,2,15,4,30]
  OneParentVector[5,7,9,16]
  multipleParents[3,12]
  */

  static std::unordered_set<int> ZeroParentCache; // use set 
  static std::unordered_set<int> OneParentCache; // use set
  static std::unordered_set<int> multipleParentsCache; // use set 
  

  
  
  vector<pair<int, int>> pairs = 
  {
    make_pair(5, 6),
    make_pair(1, 3),
    make_pair(2, 3),
    make_pair(3, 6),
    make_pair(15, 12),
    make_pair(5, 7),
    make_pair(4, 5),
    make_pair(4, 9),
    make_pair(9, 12),
    make_pair(30, 16)
  };

  // constructed graph and filled 
  std::unordered_map<int, std::vector<int>> myMap; 
  //int appearances = 0; 

  for(auto& i: pairs)
  {
      myMap[i.first].push_back(i.second);  
  }

  for(auto& i: myMap)
  {
      std::cout << "Key is ";
      std::cout << i.first << std::endl;
      for(int j = 0; j < i.second.size(); j++)
      {
          std::cout << "element ";
          cout << i.second[j] << std::endl; 
      } 
  }

  std::endl (std::cout); 

  std::unordered_map<int, std::vector<int>> copyMap = myMap; 
  for(auto& i: copyMap)
  {
      std::cout << "Key is ";
      std::cout << i.first << std::endl;
      for(int j = 0; j < i.second.size(); j++)
      {
          std::cout << "element ";
          cout << i.second[j] << std::endl; 
      } 
  }

  std::vector<int> parents{5,1,2,3,15,4,9,30}; 

    //int myAppearances = 0;
  for(auto& i : parents)
  {
      int myAppearances = 0;
    for(auto&j : myMap)
    {
      for(int k = 0; k < j.second.size(); k++)
      {
        std::cout << " Comparing " << i << " to " << j.second[k] << std::endl;  
        if(parents[i] == j.second[k])
        {
          myAppearances++; 
        }
      }
    }

    if(myAppearances == 0)
    {
      //add to 
      ZeroParentCache.insert(parents[i]);
    }

    else if (myAppearances == 1)
    {
      OneParentCache.insert(parents[i]);
    }
    else
    {
      continue;
    }

  }

  //buildZeroAndOneVectors(myMap, pairs); 

  std::endl (std::cout); 

  std::cout << " Zero Parent Cache" << std::endl; 
  for(auto& x: ZeroParentCache)
  {
    std:: cout << x << " ";
  }

  std::endl (std::cout); 

  std::cout << " One Parent Cache" << std::endl; 
  for(auto& y: OneParentCache)
  {
    std:: cout << y << " ";
  }

  
  return 0;
}
