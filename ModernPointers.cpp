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

template <typename T>

struct ListNode
{
    T data; 
    shared_ptr<ListNode<T>> next; 
};

// Search a List 
shared_ptr<ListNode<int>> SearchList(shared_ptr<ListNode<int>> L, int key)
{
    while (L && L->data != key)
    {
        L = L->next; 
        return L; 
    }
}

// Insert in List after node
void InsertAfter(const shared_ptr<ListNode<int>>& node, const shared_ptr<ListNode<int>>& new_node)
{
    new_node->next = node->next;
    node->next = new_node; // works b/c of reference counting 
}

// Delete node after this node 
void DeleteAfter(const shared_ptr<ListNode<int>>& node)
{
    node->next = node->next->next;  // works b/c of reference counting 
}




int main(int argc, char const *argv[])
{
    cout << " Hello World Modern Memory Practice \n"; 
    
    return 0;
}
