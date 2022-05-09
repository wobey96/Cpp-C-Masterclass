#include <iostream>
#include <string> 

class Person
{
    public:
    string name; 
    int age; 

    
    Person()
    {
        name = "Wallace";
        age = 10;
    }

    Person(string myName, int myAge)
    {
        name = myName; 
        age = myAge;
    }

    void getName()
    {
        std::cout << " name is " << name << std::endl; 
    }

    void getAge()
    {
        std::cout <<" Age is " << age; 
    }
};

int main()
{
    std::cout << "Hello World\n"; 
    return 0; 
}