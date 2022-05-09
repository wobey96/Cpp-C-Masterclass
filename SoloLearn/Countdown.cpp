#include <iostream>
//using namespace std;

void countDownApp(int& myN)
{
    int finalNumber = 1;
    int multipleOf = 5;
    int beepCondition = 0;  

    while (myN >= finalNumber)
    {
        std::cout << myN << std::endl;
        beepCondition = (myN % multipleOf);

        if ( beepCondition == 0)
        {
            std::cout << "Beep" << std::endl; 
        }
        --myN;
    }
}

int main() {
    int theInput;
    cin >> theInput;
    countDownApp(theInput); 
    return 0;
}
