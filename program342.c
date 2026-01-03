#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;         // $
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{
    printf("NULL <=> ");
    while(first != NULL)
    {
        printf("| %d |=> ",first->data);
        first = first->next;
    }
    printf(" NULL\n");
}

int Count(PNODE first)
{ 
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}

void InsertFirst(PPNODE first,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      //    $

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      //    $

    
    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        newn->prev = temp;
        temp->next = newn;
    }
}


void DeleteFirst(PPNODE first)
{
    if(*first == NULL)
    {
        printf("LL is empty\n");
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        *first = (*first)->next;
        free((*first)->prev);
        (*first)->prev = NULL;
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        printf("LL is empty\n");
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->prev->next = NULL;
        free(temp);
    }
}

void InsertAtPos(PPNODE first, int no, int pos)
{
    int iCnt = 0, iCount = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    iCount = Count(*first);

    if((pos < 1) || (pos > iCount+1))
    {
        printf("inalid position\n");
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
        newn = (PNODE)malloc(sizeof(PNODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->next->prev = newn;    // $
        temp->next = newn;
        newn->prev = temp;    // $
    }
}

void DeleteAtPos(PPNODE first, int pos)
{
    int iCount = 0, iCnt = 0;
    PNODE temp = NULL;
    PNODE target = NULL;

    iCount = Count(*first);

    if((pos < 1) || (pos > iCount+1))
    {
        printf("inalid position\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(first);
    }
    else if(pos == iCount)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;
        
        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }
       
        target = temp->next;

        target->next->prev = temp;   // $
        temp->next = target->next;        
        
        free(target);
    }
}

int main()
{
    PNODE head = NULL;
    int iChoise = 0;
    int iValue = 0;
    int iPos = 0;
    int iRet = 0;

    printf("----------------------------------------------------------------------------\n");
    printf("-----------------------Doubly Linear LinkedList-----------------------------\n");
    printf("----------------------------------------------------------------------------\n\n");
    
    while(1)
    {
        printf("--------------------------------------------------------------------------\n");
        printf("-------------------Please select the option-------------------------------\n");
        printf("--------------------------------------------------------------------------\n");
        printf("1 : Insert newn node at First position\n");
        printf("2 : Insert newn node at Last position\n");
        printf("3 : Insert newn node at Given position\n");
        printf("4 : Delete newn node from First position\n");
        printf("5 : Delete newn node from Last position\n");
        printf("6 : Delete newn node from Given position\n");
        printf("7 : Display all elements of LinkedList\n");
        printf("8 : Count number of nodes\n");
        printf("9 : Terminate the Application\n");
        printf("--------------------------------------------------------------------------\n");

        scanf("%d",&iChoise);

        if(iChoise == 1)
        {
            printf("Enter the data that you want to insert : \n");
            scanf("%d",&iValue);

            InsertFirst(&head,iValue);
        }
        else if(iChoise == 2)
        {
            printf("Enter the data that you want to insert : \n");
            scanf("%d",&iValue);

            InsertLast(&head,iValue);
        }
        else if(iChoise == 3)
        {
            printf("Enter the data that you want to insert : \n");
            scanf("%d",&iValue);

            printf("Enter the Position at which you want to insert new node : \n");
            scanf("%d",&iPos);

            InsertAtPos(&head,iValue,iPos);
        }
        else if(iChoise == 4)
        {
            printf("Deleting the first element from LinkedList\n");

            DeleteFirst(&head);
        }
        else if(iChoise == 5)
        {
            printf("Deleting the first element from LinkedList\n");

            DeleteLast(&head);
        }
        else if(iChoise == 6)
        {
            printf("Deleting the element from given position from LinkedList\n");

            printf("Enter the Position at which you want to delete the node : \n");
            scanf("%d",&iPos);

            DeleteAtPos(&head,iPos);
        }
        else if(iChoise == 7)
        {
            printf("Elements of the LinkedList are : \n");
            Display(head);
        }
        else if(iChoise == 8)
        {
            iRet = Count(head);
            printf("Number of elements in the LinkedList are : %d\n",iRet);
        }
        else if(iChoise == 0)
        {
            printf("Thank you for using application\n");
            break;
        }
        else
        {
            printf("Inavalid Choise\n");
        }
        printf("--------------------------------------------------------------------------\n");
    }

    return 0;
}