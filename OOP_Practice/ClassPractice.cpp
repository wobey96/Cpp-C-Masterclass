#include <iostream>
#include <queue>
#include <functional>
#include <string> 
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>
#include <unordered_map>
#include <memory>
#include <bitset>
#include <string.h>

using namespace std; 

class Person
{
    private:
    int myAge;
    string myName; 
    char* buffer; 

    public:
    Person()
    {
        cout << "default Ctor :) \n"; 
    }
    
    /*
    Person(int iAge, string iName)
    {
        cout << "Overloaded Ctor :) \n";
        myAge = iAge;
        myName = iName; 
    }
    */

    Person(char* initStr)
    {
        if(initStr != NULL)
        {
            buffer = new char [strlen(initStr) + 1];
            strcpy(buffer, initStr); 
        }
        else
        {
            buffer = NULL; 
        }
    }

    Person(const Person& inP1)
    {
        buffer = NULL; 
        if(inP1.buffer != NULL)
        {
            buffer = new char [strlen(inP1.buffer)+1]; 
            strcpy(buffer, inP1.buffer); 
            cout << (unsigned int*)buffer << endl; 
        }
    }

    void UsingPerson(Person myP1)
    {
        cout << " string buff \n"; 
        cout << myP1.getCharPtr() << "\n"; 
    }

    Person(int iAge, string iName):myAge(iAge), myName(iName)
    {
        cout << "initialization list Ctor \n"; 
        buffer = NULL; 
    } 

    ~Person()
    {
        cout << "call Dtor \n"; 
        if(buffer != NULL)
        {
            delete [] buffer; 
        }
    }

    int getAge()
    {
        return myAge; 
    }
    

    void setAge(int newAge)
    {
        myAge = newAge;
    }

    string getName()
    {
        return myName;
    }

    void setName(string newName)
    {
        myName = newName;
    }

    int getCharPtrLength()
    {
        return strlen(buffer); 
    }

    char* getCharPtr()
    {
        return buffer; 
    }



};

int main(int argc, char const *argv[])
{
    std::vector<char> charVec; 
    cout << "Hello World \n"; 
    int num = 10;
    string tempName = "Wallace";
    //Person P1(11, "Quintin"); 
    Person P1("Wallace Obey"); 
    Person P2("Quintin"); 
    P1.UsingPerson(P2); 
    cout << " char ptr length \n";
    cout << P1.getCharPtrLength() << "\n";
    char* myCharPtr = P1.getCharPtr(); 
    int charPtrLength = P1.getCharPtrLength(); 


/*
    for(int i = 0; i < charPtrLength; i++)
    {
        cout << myCharPtr[i] << "\n"; 
        charVec.push_back(myCharPtr[i]);

    } 
*/

/*
    cout << "printing charVec \n"; 

    for(auto i: charVec)
    {
        cout << i << "\n";
    }
*/

/*
    P1.setAge(num); 
    P1.setName(tempName); 
*/ 



/*
    cout << "Person age \n";
    cout << P1.getAge() << "\n"; 
    cout << "Person name \n";
    cout << P1.getName() << "\n"; 
*/

/*
    cout << " \n";
    cout << " size of class " << sizeof(P1) << "\n"; 
    cout << " size of string " <<  sizeof(P1.getName()) << "\n"; 
    cout << " size of ptr " << sizeof(void*) << "\n"; 
    cout << " size of int " << sizeof(int) << "\n"; 
    cout << " size of double " << sizeof(double) << "\n"; 
    cout << " size of float " << sizeof(float) << "\n"; 
    cout << " size of char " << sizeof(char) << "\n";
    cout << " size of bool " << sizeof(bool) << "\n";  
    cout << " \n";
*/
    

    return 0;
}
