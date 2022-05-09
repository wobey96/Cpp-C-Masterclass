#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std; 


struct Node
{
    int data;
    struct Node *next; 
} *first = NULL; 

struct Node
{
    int data;
    struct Node *next; 
} *first = NULL; 

void creatList(int A[], int n)
{
    int i; 
    struct Node *t, *last; 
    first = (struct Node*)malloc(sizeof(struct Node)); 
    first->data = A[0];
    first->next = NULL; 
    last = first; 

    for(int i = 0; i < n; i++)
    {
        t = (struc Node*)malloc(sizeof(struct Node)); 
        t->data = A[i];
        t->next = NULL; 
        last = t;
    }
}

void create(int A[], int n)
{
    int i; 
    struct Node *t, *last; 
    first = (struct Node *)malloc(sizeof(struct Node)); 
    first->data = A[0];
    first->next = NULL; 
    last = first; 

    for(i = 1; i < n; i++)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL; 
        last->next = t; 
        last = t; 
    }
}

void Display(struct Node *p)
{
    while(p != NULL) // or while(P) would work 
    {
        printf("%d", p->data); 
        p = p->next; 
    }
}

int main()
{ 
    char 
}
