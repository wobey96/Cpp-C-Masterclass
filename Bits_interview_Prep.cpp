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

   /*

   myint1 = myint1 + myint2;
   myint2 = myint1 - myint2; 
   myint1 = myint1 - myint2; 

   cout << " after swap myint1: " << myint1 << endl; 
   cout << " after swap myint2: " << myint2 << endl;  

   */

  /*

  cout << " Counting bits practice " << endl; 

  unsigned int mynum3 = 13; // 3 bits set 

  int count = 0; 

  while(mynum3)
  {
    if(mynum3 & 1)
    {
        count++; 
    }
    mynum3 = mynum3 >> 1; 
  }

  cout <<" num of bits is " << count << endl; 

  */

 /*

    cout << " size of an int ptr " << sizeof(int*) << endl;
    cout << " size of an int ptr " << sizeof(char*) << endl;
    cout << " size of an int ptr " << sizeof(double*) << endl;
    cout << " size of an int ptr " << sizeof(long*) << endl;

    */

   /*

   int mynum4 = 33;

   if(mynum4 & 1)
   {
    cout << " odd num \n"; 
   } 
   else
   {
    cout << " even num \n"; 
   }

   */

    class Empty_Class
    {
        bool mybool1;
        bool mybool2;
        int myin11;
    };
    
    cout << " Empty class size " << sizeof(Empty_Class) << endl; 

    

    return 0; 

}