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
        struct node *first;
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
    struct node * newn = new struct node;

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
        cout<<"Stack is empty";
        return -1;
    }
    else
    {
        temp = first;
        value = temp->data;

        first = first->next;
        delete temp;

        iCount--;

        return value;
    }
}

void StackX :: Display()
{
    struct node *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
    cout<<"\n";
}

int StackX :: Count()
{
    return iCount;
}

int main()
{
    StackX sobj;
    int iRet = 0;

    sobj.Push(10);
    sobj.Push(20);
    sobj.Push(30);
    sobj.Push(40);
    sobj.Push(50);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Stack are : "<<iRet<<"\n";

    iRet = sobj.Pop();
    cout<<"Poped are : "<<iRet<<"\n";
    sobj.Display();

    iRet = sobj.Count();

    cout<<"Stack are : "<<iRet<<"\n";

    iRet = sobj.Pop();
    cout<<"Poped are : "<<iRet<<"\n";
    sobj.Display();

    iRet = sobj.Count();
    cout<<"Stack are : "<<iRet<<"\n";


    return 0;
}