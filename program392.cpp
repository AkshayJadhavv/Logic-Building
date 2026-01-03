#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node<T> *next;
};

template<class T>
class QueueX
{
    private:
        struct node<T> *first;
        int iCount;
    
    public:
        QueueX();
        void Enqueue(T);
        T Dequeue();
        void Display();
        int Count();        
};

template<class T>
QueueX<T> :: QueueX()
{
    first = NULL;
    iCount = 0;
}

template<class T>
void QueueX<T> :: Enqueue(T no)
{
    struct node<T> * newn = new struct node<T>;
    struct node<T> *temp = NULL;

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

template<class T>
T QueueX<T> :: Dequeue()
{
    struct node<T> *temp = NULL;
    T value;

    if(first == NULL)
    {
        cout<<"Unable to remove as queue is empty";
        return NULL;
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

template<class T>
void QueueX<T> :: Display()
{
    struct node<T> *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
    cout<<"\n";
}

template<class T>
int QueueX<T> :: Count()
{
    return iCount;
}

int main()
{
    QueueX<int>* sobj = new QueueX<int>();
    int iRet = 0;

    sobj->Enqueue(10);
    sobj->Enqueue(20);
    sobj->Enqueue(30);
    sobj->Enqueue(40);
    sobj->Enqueue(50);

    sobj->Display();

    iRet = sobj->Count();

    cout<<"Number of elements from quue : "<<iRet<<"\n";

    iRet = sobj->Dequeue();

    cout<<"Dequee are : "<<iRet<<"\n";
    sobj->Display();

    iRet = sobj->Count();
    cout<<"Stack are : "<<iRet<<"\n";

    iRet = sobj->Dequeue();

    cout<<"Dequee are : "<<iRet<<"\n";
    sobj->Display();

    iRet = sobj->Count();
    cout<<"Stack are : "<<iRet<<"\n";



    return 0;
}