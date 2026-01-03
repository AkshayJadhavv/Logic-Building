#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;       
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE first, PPNODE last,int no)
{
  
}

void InsertLast(PPNODE first, PPNODE last, int no)
{

}


void DeleteFirst(PPNODE first)
{
    
}

void DeleteLast(PPNODE first)
{
}


void Display(PNODE first, PNODE last)
{


}

int Count(PNODE first,PNODE last)
{
    return 0; 
}

void InsertAtPos(PPNODE first, int no, int pos)
{
 
}

void DeleteAtPos(PPNODE first, int pos)
{
  
}

int main()
{
    
    return 0;
}