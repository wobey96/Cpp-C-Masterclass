#include <iostream>
#include <string> 
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>
#include <unordered_map>
#include <utility>
#include <string>

template<typename T>

void mySwap(T& val1, T& val2)
{
    T tempVal = std::move(val1);
    val1 = std::move(val2); 
    val2 = std::move(tempVal);  
}

class Person
{
    public:
    Person(int myNum, std::string myString): age(myNum), name(myString)
    {

    }
    ~Person()
    {
        std::cout << " Destroying Object" << std::endl; 
    }

    void printStuff()
    {
        std::cout << " Print name " << name << std::endl; 
        std::cout << " Print age " << age << std::endl; 
    }

    static void CreatPersonObject(int num1, std::string myStr)
    {
        Person Person1(num1, myStr); 
    }

    private:
    int age; 
    std::string name; 
    
};

int main()
{
    std::cout << "Hello World " << std::endl;

    std::endl (std::cout);

    //std::string name1 = "Wallace";
    //std::string name2 "Justin";
    

    Person Person1(26, "Wallace"); //= new Person(26, "Wallace");
    Person Person2(28, "Justin"); //= new Person(28, "Justin"); 

    std::cout << " Person 1 stuff " << std::endl; 
    Person1.printStuff();
    std::cout << " Person 2 stuff " << std::endl; 
    Person2.printStuff();

    std::endl (std::cout);

    std::cout << " Does swap " << std::endl;
    mySwap(Person1, Person2); 

    std::endl (std::cout);

    std::cout << " After Swap " << std::endl;

    std::endl (std::cout);

    std::cout << " Person 1 stuff " << std::endl; 
    Person1.printStuff();
    std::cout << " Person 2 stuff " << std::endl; 
    Person2.printStuff();

}