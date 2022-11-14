#include <iostream>
#include <queue>
#include <functional>
#include <string> 
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>
#include <unordered_map>

using namespace std; 

int main(int argc, char** argv)
{
    
    int myint1 = 10;
    int myint2 = 20; 

    
    cout << " myint1 1: " << myint1 << endl;
    cout << " myint2 2: " << myint2 << endl;
    /*
    myint1 = myint1 ^ myint2; 
    cout << " myint1 update 1:" << myint1 << endl; 
    myint2 = myint1 ^ myint2; 
    cout << " myint2 unpdate 2:"<< myint2 << endl;
    myint1 = myint1 ^ myint2; 
    cout << " myint1 update 3:" << myint1 << endl; 
    */

   myint1 = myint1 + myint2;
   myint2 = myint1 - myint2; 
   myint1 = myint1 - myint2; 

   cout << " after swap myint1: " << myint1 << endl; 
   cout << " after swap myint2: " << myint2 << endl;  
    

    return 0; 

}