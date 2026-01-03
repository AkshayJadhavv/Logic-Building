
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class QueueX
{
    private:
        struct node *first;
        int iCount;
    
    public:
        QueueX();
        void Enqueue(int);
        int Dequeue();
        void Display();
        int Count();        
};

QueueX :: QueueX()
{
    first = NULL;
    iCount = 0;
}

void QueueX :: Enqueue(int no)
{
    struct node * newn = new struct node;
    struct node *temp = NULL;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    iCount++; 
}

int QueueX :: Dequeue()
{
    struct node *temp = NULL;
    int value = 0;

    if(first == NULL)
    {
        cout<<"Unable to remove as queue is empty";
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

void QueueX :: Display()
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

int QueueX :: Count()
{
    return iCount;
}

int main()
{
    QueueX* sobj = new QueueX();
    int iRet = 0;

    sobj.Enqueue(10);
    sobj.Enqueue(20);
    sobj.Enqueue(30);
    sobj.Enqueue(40);
    sobj.Enqueue(50);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements from quue : "<<iRet<<"\n";

    iRet = sobj.Pop();

    cout<<"Dequee are : "<<iRet<<"\n";
    sobj.Display();

    iRet = sobj.Count();

    cout<<"Stack are : "<<iRet<<"\n";


    iRet = sobj.Count();
    cout<<"Stack are : "<<iRet<<"\n";


    return 0;
}