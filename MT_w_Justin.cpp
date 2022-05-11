#include <iostream>
#include <queue>
#include <functional>
#include <string> 
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>
#include <unordered_map>
#include <thread>
#include <mutex>

std::mutex mtx; 

void AddNum(int& myNum)
{
    std::lock_guard<std::mutex> lck (mtx); // wrapper for locking and unlocking 
    // lock starts
    myNum = myNum +2; 
    // add 2 to an int

    std::cout << "Add Num " << myNum << std::endl; 
    // functino ends lock ends - resources are released 
}

int main()
{
    int Num = 0; 
    std::cout << "Hello World MultiThread" << std::endl; 

    // std::ref() -- makes something an LValue Reference
    // std::move() -- makes something an RValue Reference  

     std::thread first_thread (AddNum, std::ref(Num)); //2 // std thread object does not return a value - it only runs the task
     std::thread second_thread (AddNum, std::ref(Num)); // 4
     std::thread third_thread (AddNum, std::ref(Num)); // 6
     std::thread fourth_thread (AddNum, std::ref(Num)); // 8

    // std thread will alway passes by value - so you need to specifically make it a pass by ref with std::ref()
    // multiple reads isn't a problem on memory but multiple writes is. 
    // We get a weird output because of this. This is know as a race condition - multiple writes happening at the same time. 

    first_thread.join(); // main thread / parent thread waits for this child thread to be done - but they do not wait for each other to be done
    second_thread.join(); // main thread / parent thread waits for this child thread to be done - but they do not wait for each other to be done
    third_thread.join();  // main thread / parent thread waits for this child thread to be done - but they do not wait for each other to be done
    fourth_thread.join();  // main thread / parent thread waits for this child thread to be done - but they do not wait for each other to be done
    return 0; 
}