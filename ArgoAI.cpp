#include <iostream>
#include <queue>
#include <functional>
#include <string> 
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>
#include <unordered_map>

int main()
{
    std::vector<std::string> tools { "rentch", "hammer", "screw", "nail", "coffin", "mouse", "Wallace", "keyboard", "screen", " speaker", "rentch", " youtube", "facebook", "instagram", "Quintin", "Anson", "Dad", "mom", "rentch", "mouse"};
    std::cout << tools.size() << std::endl; 

    int position = 10; 
    std::string target = "screw"; 
    int rightSteps = 0; 
    int leftSteps = 0; 
    bool seenRight = false; 
    bool seenLeft = false; 

    for(int i = position; i < tools.size(); i++)
    {
        if(tools[i] == target)
        {
            seenRight = true; 
            std::cout << " Seen " << std::endl; 
            break;
        }
        rightSteps++;  
    }
    std::cout << " right step on right side " << rightSteps << std::endl;

    if(seenRight == false)
    {
        for(int i = 0; i < position; i++)
        {
            if(tools[i] == target)
            {
                //seenRight = true; 
                std::cout << " Seen at location " << i << std::endl; 
                break;
            }
            rightSteps++; 
        }
    std::cout << " right step on left side " << rightSteps << std::endl;
    }

    std::endl (std::cout); 

    for(int i = position; i >= 0; i--)
    {
        if(tools[i] == target)
        {
            seenLeft = true; 
            std::cout << " Seen " << std::endl; 
            break;
        }
        leftSteps++;  
    }
    std::cout << " left step on left side " << leftSteps << std::endl;

    if(seenLeft == false)
    {
        for(int i = tools.size()-1; i >= position; i--)
        {
            if(tools[i] == target)
            {
                //seenRight = true; 
                std::cout << " Seen at location " << i << std::endl; 
                break;
            }
            leftSteps++; 
        }
    std::cout << " left step on left side " << leftSteps << std::endl;
    }

    std::cout << "right side steps " <<rightSteps << " left side steps " << leftSteps << std::endl; 
}