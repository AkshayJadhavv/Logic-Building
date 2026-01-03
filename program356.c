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
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;

        (*last)->next = *first; 
    }  
    else
    {
        newn->next = *first;
        *first = newn;

        (*last)->next = *first;
    }
}

void InsertLast(PPNODE first, PPNODE last, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;

        (*last)->next = *first; 
    }  
    else
    {
        (*last) -> next = newn;
        *last = newn;

        (*last)->next = *first;
    }
}


void DeleteFirst(PPNODE first,PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        delete *first;

        *first = NULL;
        *last = NULL;
    }
    else
    {
        *first = *first->next;

        delete *last->next; 

        *last->next = *first;
    }
}

void DeleteLast(PPNODE first, PPNODE last)
{
    PNODE temp = NULL;

    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        delete *last;

        *first = NULL;
        *last = NULL; 
    }
    else
    {
        temp = *first;

        while(temp->next != *last)
        {
            temp = temp->next;
        }

        delete *last;

        temp->next = *first;
        *last = temp;
    }
}


void Display(PNODE first, PNODE last)
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    
    do
    {
        printf("| %d |-> ",first->data);
        first = first->next;
    }while(first != last->next);
    printf("\n");
}

int Count(PNODE first,PNODE last)
{
    int iCount = 0;

    if(first == NULL && last == NULL)
    {
        return iCount;
    }
    
    do
    {
        iCount++;
        first = first->next;
    }while(first != last->next);

    return iCount; 
}

void InsertAtPos(PPNODE first, int no, int pos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    int i = 0;

    int iCount = Count(*first);

    if((pos < 1) || (pos > iCount+1))
    {
        return;
    }

    if(pos == 1)
    {
        InsertFirst(first,no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(first,no);
    }
    else
    {
        temp = *first;

        for(i = 1; i < pos-1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE first, int pos)
{
  
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    int iRet = 0;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    Display(head,tail);
    
    iRet = Count(head,tail);

    printf("Number of elements is SCL : %d\n",iRet);

    return 0;
}