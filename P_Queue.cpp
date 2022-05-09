#include<iostream>
#include<queue>
#include<functional>
#include<vector>

int main()
{
    std::cout  << "Hello World" << std::endl; 
    std::cout << "Default min heap" << std::endl; 
    std::priority_queue<int, std::vector<int>, std::greater<int>> myMinHeap;
    std::priority_queue<int> myMaxHeap;

    myMinHeap.push(1);
    myMinHeap.push(9);
    myMinHeap.push(2);
    myMinHeap.push(3);
    myMinHeap.push(7);
    myMinHeap.push(5);

    myMaxHeap.push(1);
    myMaxHeap.push(9);
    myMaxHeap.push(2);
    myMaxHeap.push(3);
    myMaxHeap.push(7);
    myMaxHeap.push(5);

    std::cout << "Printing min heap" << std::endl; 

    while(!myMinHeap.empty())
    {
        std::cout << myMinHeap.top() << std::endl;
        myMinHeap.pop(); 
    }

    std::endl (std::cout); 

    std::cout << "Printing max heap" << std::endl; 

    while(!myMaxHeap.empty())
    {
        std::cout << myMaxHeap.top() << std::endl;
        myMaxHeap.pop(); 
    }
    

}