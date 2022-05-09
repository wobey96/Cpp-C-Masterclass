#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x) 
{
    //complete the function
    std::string myString = std::to_string(x);
    for(int i = 0, j = size(myString) -  1; i < j; ++i, --j)
    {
        if(myString[i] != myString[j])
        {
            return false; 
        }
    }
    return true; 
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}
