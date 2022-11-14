#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data; 
    struct Node* next; 
};

// 1.) Insert At the front of the linked list
// 4 step process
void InsertBegin(struct Node** HeadRef, int newData)
{
    printf("Adding %d at beginning of list \n ", newData);

    // new node 
    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node)); 

    // assign data to node 
    NewNode->data = newData; 

    // point to head so we have two thing pointing to head 
    NewNode->next = (*HeadRef); 

    // move head to point to new node 
    (*HeadRef) = NewNode; 
}

// 2.) Insert After a given node
// 5 step process 
void InsertMiddle(struct Node* PrevNode, int newData)
{
    printf("Inserting %d after %d node \n ", newData, PrevNode->data);

    if(PrevNode == NULL)
    {
        printf("We need to insert in the middle\n"); 
        return; 
    }

    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));

    NewNode->data = newData; 

    NewNode->next = PrevNode->next; ;

    PrevNode->next = NewNode; 
}


// 3.) Insert At the end of the linked list
// 6 step process
void InsertEnd(struct Node** HeadRef, int newData)
{
    printf("Inserting %d at the end\n", newData);

    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));

    struct Node* LastNode = *HeadRef; 

    NewNode->data = newData; 

    NewNode->next = NULL; 

    if(*HeadRef == NULL)
    {
        *HeadRef = NewNode; 
    }

    while(LastNode->next != NULL)
    {
        LastNode = LastNode->next; 
    }

    LastNode->next = NewNode; 
}

void traverseList(struct Node** HeadRef)
{
    printf("Traversing Function now \n "); 
    
    while((*HeadRef) != NULL)
    {
        printf(" %d->", (*HeadRef)->data);
        // printf("Go to nextr head\n");
        HeadRef = &(*HeadRef)->next; 
    }
    printf("\n");
    printf("\n");
}


int main(int argc, char* argv[])
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node)); 

    head->data = 1; 
    head->next = second;

    second->data = 2; 
    second->next = third; 

    third->data = 3; 
    third->next = NULL; 

    struct Node** CurrHead = &head;

    // insert new data at beginning 
    InsertBegin(CurrHead, 5);
    // loop through list
    traverseList(CurrHead);

    // insert Node at middle
    InsertMiddle(second, 10);
    // loop through list
    traverseList(CurrHead);

    // Insert at end of list
    InsertEnd(CurrHead, 20);
    // loop through list
    traverseList(CurrHead);
     
}