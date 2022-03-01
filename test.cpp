#include <iostream> 
#include <string>
int main()
{
    std::string name = "Wallace"; 

    std::string ans; 

    for(int i = name.length()-1; i >= 0; i--)
    {
        ans.push_back(name[i]);
    }

    std::cout << "original " << name << std::endl; 
    std::cout << "reverse " << ans << std::endl; 
    
    return 0; 
}
