#include <iostream>
#include <queue>
#include <functional>
#include <string> 
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>
#include <unordered_map>

void AddToMap(std::pair<int, double> InputTrade)
{
    static std::unordered_map<std::pair<int, double>> MapOfStocks;
    static std::pair<int, double> highestTrade; 
}