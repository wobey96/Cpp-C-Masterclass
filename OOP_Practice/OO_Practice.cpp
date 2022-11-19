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
    int selfAge;; 

    public:
    Person()
    {
        cout << "Person Ctor\n"; 
    }
    ~Person()
    {
        cout << "Person Dtor\n";
    }
    int getAge()
    {
        return selfAge;
    }
    void setAge(int inAge)
    {
        selfAge = inAge; 
    }
    virtual void MySpeak()
    {
        cout << "Hello I'm a Person\n";
    }
};

class Student: public Person
{
    public:
    Student()
    {
        cout << "Student Ctor\n";
    }
    ~Student()
    {
        cout << "Student Dtor\n"; 
    }
    void MySpeak()
    {
        cout << "Hello I'm a Student\n"; 
    }
};

void StandAloneSpeak(Person& MyPerson)
{
    MyPerson.MySpeak(); 
}

int main(int argc, char const *argv[])
{
    //Person P1; 
    Student S1; 
    StandAloneSpeak(S1); 
    
    return 0;
}
