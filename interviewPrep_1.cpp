#include <iostream>
#include <string> 
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std; 

int getMinutes(string& myString1, string& mystring2)
{ 
    int hourCalc_1 = stoi(myString1.substr(0,2)) * 60; 
    int hourCalc_2 = stoi(mystring2.substr(0,2)) * 60; 
    int finalHourCalc = abs(hourCalc_1 - hourCalc_2); 

    int minCalc_1 = stoi(myString1.substr(3, 2)); 
    int minCalc_2 = stoi(mystring2.substr(3, 2));
    int finalMinCalc = abs(minCalc_1 - minCalc_2); 

    int finalCalc = finalHourCalc + finalMinCalc; 

    return finalCalc; 
}

int main()
{
    // TEST 
    int currentMin = 0; 
    int globalMin = 0; 

    // time: O(n^2) space: (1)
    // O(nlogn) + O(n) --> O(nlogn) + space: (1)
    // time: O(n); space: O(n)

    vector<string> myVector = {"10:00", "10:30", "11:30", "14:30", "16:00", "16:15", "17:30"}; 

    sort(myVector.begin(), myVector.end()); // O(nlogn)

    globalMin = getMinutes(myVector[1], myVector[0]);

    for(int i = 1; i < myVector.size(); i++)
    {
        currentMin = getMinutes(myVector[i], myVector[i-1]); // O(n-1) --> O(n)
        globalMin = min(globalMin, currentMin); 
    }

    // O(nlogn) + O(n) + O(n) + O(n) + O(n)

    cout << "my final number for min " << globalMin << endl; 

    return 0; 
}