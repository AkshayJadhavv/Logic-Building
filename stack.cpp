#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class StackX
{
    private:
        struct node * first;
        int iCount;

    public:
        StackX();
        void Push(int);
        int Pop();
        void Display();
        int Count();
};

StackX :: StackX()
{
    first = NULL;
    iCount = 0;
}

void StackX :: Push(int no)
{
    struct node *newn = NULL;

    newn = new struct node();

    newn->data = no;
    newn->next = NULL;

    newn->next = first;
    first = newn;

    iCount++;
}

int StackX :: Pop()
{
    struct node *temp = NULL;
    int value = 0;

    if(first == NULL)
    {
        cout<<"Unable to pop Stack is empty";
        return -1;
    }   
    else
    {
        temp = first;

        first = first->next;
        value = temp->data;

        delete temp;

        iCount--;

        return value;
    }
}

void StackX :: Display()
{
    struct node * temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
}

int StackX :: Count()
{
    return iCount;
}

int main()
{
    StackX* sobj = new StackX();
    int iRet = 0;

    sobj->Push(11);
    sobj->Push(21);
    sobj->Push(51);
    sobj->Push(101);
    sobj->Push(111);

    sobj->Display();

    iRet = sobj->Count();
    cout<<"Number of elements in Stack are : "<<iRet<<"\n";

    iRet = sobj->Pop();
    cout<<"Poped element in Stack is : "<<iRet<<"\n";

    sobj->Display();

    iRet = sobj->Count();
    cout<<"Number of elements in Stack are : "<<iRet<<"\n";

    iRet = sobj->Pop();
    cout<<"Poped element in Stack is : "<<iRet<<"\n";

    sobj->Display();

    iRet = sobj->Count();
    cout<<"Number of elements in Stack are : "<<iRet<<"\n";

    return 0;
}