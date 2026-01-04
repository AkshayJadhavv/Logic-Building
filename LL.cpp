#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//
// SinglyLL
// 
//////////////////////////////////////////////////////////

struct snode 
{
    int data;
    struct snode *next;
};

typedef struct snode SNODE;
typedef struct snode* SPNODE;

class SinglyLL
{
    private:
        SPNODE first;
        int iCount;

    public:

        SinglyLL()
        {
            cout<<"Inside constructor\n";

            first = NULL;
            iCount = 0;
        }

        void InsertFirst(int no)
        {
            SPNODE newn = NULL;
            newn = new SNODE();

            newn->data = no;
            newn->next = NULL;

            if(first == NULL)
            {
                first = newn;
            }
            else
            {
                newn->next = first;
                first = newn;
            }
            iCount++;

        }
        void InsertLast(int no)
        {
            SPNODE temp = NULL;
            SPNODE newn = NULL;
            newn = new SNODE();

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
                    temp = temp -> next;
                }

                temp->next = newn;    
            }
            iCount++;
        }

        void DeleteFirst()
        {
            SPNODE temp = NULL;

            if(first == NULL)
            {
                return;
            }
            else if(first->next == NULL)
            {
                delete first;
                first = NULL;
            }
            else
            {
                temp = first;
                
                first = first->next;
                delete temp;
            }
            iCount--;
        }

        void DeleteLast()
        {
            SPNODE temp = NULL;

            if(first == NULL)
            {
                return;
            }
            else if(first->next == NULL)
            {
                delete first;
                first = NULL;
            }
            else
            {
                temp = first;

                while(temp->next->next != NULL)
                {
                    temp = temp->next;
                }                

                delete temp->next;
                temp->next = NULL;
            }
            iCount--;
        }
        void Display()
        {
            SPNODE temp = NULL;

            temp = first;

            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" |->";
                temp = temp->next;
            }
            cout<<"NULL\n";
        }
        int Count()
        {
            return iCount;
        }

        void InsertAtPos(int no, int pos)
        {
            int iCnt = 0;

            SPNODE newn = NULL;
            SPNODE temp = NULL;

            if(pos < 1 || pos > iCount+1)
            {
                return;
            }

            if(pos == 1)
            {
                InsertFirst(no);
            }
            else if(pos == iCount+1)
            {
                InsertLast(no);
            }
            else
            {
                newn = new SNODE;

                newn->data = no;
                newn->next = NULL;

                temp = first;

                for(iCnt = 1; iCnt < pos-1; iCnt++)
                {
                    temp = temp->next;
                }

                newn->next = temp->next;
                temp->next = newn;

                iCount++;
            }
        }

        void DeleteAtPos(int pos)
        {
            int iCnt = 0;
            
            SPNODE target = NULL;
            SPNODE temp = NULL;

            if(pos < 1 || pos > iCount)
            {
                return;
            }

            if(pos == 1)
            {
                DeleteFirst();
            }
            else if(pos == iCount)
            {
                DeleteLast();
            }
            else
            {
                temp = first;

                for(iCnt = 1; iCnt < pos-1; iCnt++)
                {
                    temp = temp->next;
                }
                target = temp->next;
                temp->next = target->next;

                delete target;        

                iCount--;
            }
        }
};

//////////////////////////////////////////////////////////////////////////////////////
//
// SinglyCLL
//
//////////////////////////////////////////////////////////////////////////////////////

struct scnode 
{
    int data;
    struct scnode *next;
};

typedef struct scnode SCNODE;
typedef struct scnode* SCPNODE;

class SinglyCLL
{
    private:
        SCPNODE first;
        SCPNODE last;
        int iCount;

    public:

        SinglyCLL()
        {
            cout<<"Inside constructor\n";

            first = NULL;
            last = NULL;
            iCount = 0;
        }

        void InsertFirst(int no)
        {
            SCPNODE newn = NULL;
            newn = new SCNODE();

            newn->data = no;
            newn->next = NULL;

            if(first == NULL && last == NULL)
            {
                first = newn;
                last = newn;

                last->next = first;
            }
            else
            {
                newn->next = first;
                first = newn;

                last->next = first;
            }
            iCount++;

        }
        void InsertLast(int no)
        {
            SCPNODE newn = NULL;
            newn = new SCNODE();

            newn->data = no;
            newn->next = NULL;

            if(first == NULL)
            {
                first = newn;
                last = newn;

                last->next = first;
            }
            else
            {
                last->next = newn;
                last = newn;

                last->next = first;       
            }
            iCount++;
        }

        void DeleteFirst()
        {
            SCPNODE temp = NULL;

            if(first == NULL)
            {
                return;
            }
            else if(first == last)
            {
                delete first;

                first = NULL;
                last = NULL;
            }
            else
            {
                first = first->next;

                delete last->next;

                last->next = first;
            }
            iCount--;
        }

        void DeleteLast()
        {
            SCPNODE temp = NULL;

            if(first == NULL)
            {
                return;
            }
            else if(first == last)
            {
                delete last;

                first = NULL;
                last = NULL;
            }
            else
            {
                temp = first;

                while(temp->next != last)
                {
                    temp = temp->next;
                }                

                delete last;

                last = temp;

                last->next = first;
            }
            iCount--;
        }
        void Display()
        {
            SCPNODE temp = NULL;

            temp = first;

            do
            {
                cout<<"| "<<temp->data<<" |->";
                temp = temp->next;
            }while(temp != last->next);
            cout<<"NULL\n";
        }

        int Count()
        {
            return iCount;
        }

        void InsertAtPos(int no, int pos)
        {
            int iCnt = 0;

            SCPNODE newn = NULL;
            SCPNODE temp = NULL;

            if(pos < 1 || pos > iCount+1)
            {
                return;
            }

            if(pos == 1)
            {
                InsertFirst(no);
            }
            else if(pos == iCount+1)
            {
                InsertLast(no);
            }
            else
            {
                newn = new SCNODE;
                
                newn->data = no;
                newn->next = NULL;

                temp = first;

                for(iCnt = 1; iCnt < pos-1; iCnt++)
                {
                    temp = temp->next;
                }

                newn->next = temp->next;
                temp->next = newn;

                iCount++;
            }
        }

        void DeleteAtPos(int pos)
        {
            int iCnt = 0;
            
            SCPNODE target = NULL;
            SCPNODE temp = NULL;

            if(pos < 1 || pos > iCount)
            {
                return;
            }

            if(pos == 1)
            {
                DeleteFirst();
            }
            else if(pos == iCount)
            {
                DeleteLast();
            }
            else
            {
                temp = first;

                for(iCnt = 1; iCnt < pos-1; iCnt++)
                {
                    temp = temp->next;
                }
                target = temp->next;
                temp->next = target->next;

                delete target;        

                iCount--;
            }
        }
};

//////////////////////////////////////////////////////////////////////////////////////
//
// DoublyLL
//
//////////////////////////////////////////////////////////////////////////////////////

struct dnode
{
    int data;
    struct dnode *next;
    struct dnode *prev;
};

typedef struct dnode DNODE;
typedef struct dnode* PDNODE;

class DoublyLL
{

    private:
        PDNODE first;
        int iCount;
    
    public:

        DoublyLL()
        {
            first = NULL;
            iCount = 0;
        }

        void InsertFirst(int no)
        {
            PDNODE newn = NULL;

            newn = new DNODE;

            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if(first == NULL)
            {
                first = newn;
            }
            else
            {
                newn->next = first;
                first->prev = newn;
                first = newn;
            }
            iCount++;
        }

        void InsertLast(int no)
        {
            PDNODE newn = NULL;
            PDNODE temp = NULL;

            newn = new DNODE;

            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

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
                newn->prev = temp;
            }
            iCount++;
        }

        void DeleteFirst()
        {
            if(first == NULL)
            {
                return;
            }
            else if(first->next == NULL)
            {
                first = NULL;
            }
            else
            {
                first = first->next;

                delete first->prev;

                first->prev = NULL;
            }
            iCount--;
        }

        void DeleteLast()
        {
            PDNODE temp = NULL;

            if(first == NULL)
            {
                return;
            }
            else if(first->next == NULL)
            {
                first = NULL;
            }
            else
            {
                temp = first;

                while(temp->next->next != NULL)
                {
                    temp = temp->next;
                }

                delete temp->next;

                temp->next = NULL;
            }
            iCount--;
        }

        void Display()
        {
            PDNODE temp = NULL;

            temp = first;

            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" |->";
                temp = temp->next;
            } 
            cout<<"NULL\n";
        }

        int Count()
        {
            return iCount;
        }

        void InsertAtPos(int no, int pos)
        {
            int iCnt = 0;

            PDNODE newn = NULL;
            PDNODE temp = NULL;

            if(pos < 1 || pos > iCount+1)
            {
                cout<<"DLL is Empty\n";
                return;
            }

            if(pos == 1)
            {
                InsertFirst(no);
            }
            else if(pos == iCount+1)
            {
                InsertLast(no);
            }
            else
            {
                newn = new DNODE;

                newn->data = no;
                newn->next = NULL;
                newn->prev = NULL;

                temp = first;

                for(iCnt = 1; iCnt < pos-1; iCnt++)
                {
                    temp = temp->next;
                }

                newn->next = temp->next;
                temp->next->prev = newn;
                temp->next = newn;
                newn->prev = temp;
            
                iCount++;
            }
        }

        void DeleteAtPos(int pos)
        {
            int iCnt = 0;

            PDNODE target = NULL;
            PDNODE temp = NULL;

            if(pos < 1 || pos > iCount)
            {
                cout<<"DLL is Empty\n";
                return;
            }

            if(pos == 1)
            {
                DeleteFirst();
            }
            else if(pos == iCount)
            {
                DeleteLast();
            }
            else
            {
                temp = first;

                for(iCnt = 1; iCnt < pos-1; iCnt++)
                {
                    temp = temp->next;
                }

                temp->next = temp->next->next;
                delete temp->next->prev;
                temp->next->prev = temp;
            
                iCount--;
            }
        }
};

//////////////////////////////////////////////////////////////////////////////////////
//
// DoublyCLL
//
//////////////////////////////////////////////////////////////////////////////////////

struct dcnode
{
    int data;
    struct dcnode *next;
    struct dcnode *prev;
};

typedef struct dcnode DCNODE;
typedef struct dcnode* PDCNODE;

class DoublyCLL
{

    private:
        PDCNODE first;
        PDCNODE last;
        int iCount;
    
    public:

        DoublyCLL()
        {
            first = NULL;
            last = NULL;
            iCount = 0;
        }

        void InsertFirst(int no)
        {
            PDCNODE newn = NULL;

            newn = new DCNODE;

            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if(first == NULL && last == NULL)
            {
                first = newn;
                last = newn;

                last->next = first;
                first->prev = last;
            }
            else
            {
                newn->next = first;
                first->prev = newn;
                first = newn;

                last->next = first;
                first->prev = last;
            }
            iCount++;
        }

        void InsertLast(int no)
        {
            PDCNODE newn = NULL;

            newn = new DCNODE;

            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if(first == NULL && last == NULL)
            {
                first = newn;
                last = newn;

                last->next = first;
                first->prev = last;
            }
            else
            {
                last->next = newn;
                newn->prev = last;

                last = newn;
                last->next = first;
                first->prev = last;
            }
            iCount++;
        }

        void DeleteFirst()
        {
            PDCNODE temp = NULL;

            if(first == NULL && last == NULL)
            {
                return;
            }
            else if(first == last)
            {
                delete first;

                first = NULL;
                last = NULL;
            }
            else
            {
                temp = first;

                first = first->next;
                delete temp;

                last->next = first; 
                first->prev = last;
            }
            iCount--;
        }

        void DeleteLast()
        {
            PDCNODE temp = NULL;

            if(first == NULL && last == NULL)
            {
                return;
            }
            else if(first == last)
            {
                delete last;

                first = NULL;
                last = NULL;
            }
            else
            {
                temp = last;
                last = last->prev;

                delete temp;

                last->next = first;
                first->prev = last;
            }
            iCount--;
        }

        void Display()
        {
            PDCNODE temp = NULL;

            temp = first;

            do
            {
                cout<<"| "<<temp->data<<" |->";
                temp = temp->next;
            }while(temp != last->next); 
            cout<<"NULL\n";
        }

        int Count()
        {
            return iCount;
        }

        void InsertAtPos(int no, int pos)
        {
            int iCnt = 0;

            PDCNODE newn = NULL;
            PDCNODE temp = NULL;

            if(pos < 1 || pos > iCount+1)
            {
                cout<<"DLL is Empty\n";
                return;
            }

            if(pos == 1)
            {
                InsertFirst(no);
            }
            else if(pos == iCount+1)
            {
                InsertLast(no);
            }
            else
            {
                newn = new DCNODE;

                newn->data = no;
                newn->next = NULL;
                newn->prev = NULL;

                temp = first;

                for(iCnt = 1; iCnt < pos-1; iCnt++)
                {
                    temp = temp->next;
                }

                newn->next = temp->next;
                temp->next->prev = newn;
                temp->next = newn;
                newn->prev = temp;
            
                iCount++;
            }
        }

        void DeleteAtPos(int pos)
        {
            int iCnt = 0;

            //PDCNODE target = NULL;
            PDCNODE temp = NULL;

            if(pos < 1 || pos > iCount)
            {
                cout<<"DLL is Empty\n";
                return;
            }

            if(pos == 1)
            {
                DeleteFirst();
            }
            else if(pos == iCount)
            {
                DeleteLast();
            }
            else
            {
                temp = first;

                for(iCnt = 1; iCnt < pos-1; iCnt++)
                {
                    temp = temp->next;
                }

                temp->next = temp->next->next;
                delete temp->next->prev;
                temp->next->prev = temp;
            
                iCount--;
            }
        }
};

//////////////////////////////////////////////////////////////////////////////////////
//
// Main Function
//
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;

    SinglyLL sobj;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    cout<<"============================Singly Linear LinkedList============================\n";

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";


    sobj.InsertAtPos(105,5);
    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.DeleteAtPos(5);
    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    cout<<"============================Singly Linear LinkedList============================\n";
    cout<<"\n";

/////////////////////////////////////////////////////////
// SinglyCLL
////////////////////////////////////////////////////////

    cout<<"============================Singly Circular LinkedList============================\n";

    SinglyCLL scobj;

    scobj.InsertFirst(51);
    scobj.InsertFirst(21);
    scobj.InsertFirst(11);

    scobj.InsertLast(101);
    scobj.InsertLast(111);
    scobj.InsertLast(121);

    scobj.Display();

    iRet = scobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    scobj.InsertAtPos(105,5);
    scobj.Display();

    iRet = scobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    scobj.DeleteAtPos(5);
    scobj.Display();

    iRet = scobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    cout<<"============================Singly Circular LinkedList============================\n";
    cout<<"\n";

/////////////////////////////////////////////////////////
// DoublyLL
////////////////////////////////////////////////////////

    cout<<"============================Doubly Linear LinkedList==============================\n";

    DoublyLL dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    dobj.InsertAtPos(105,5);

    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    dobj.DeleteAtPos(5);

    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    cout<<"============================Doubly Linear LinkedList==============================\n";
    cout<<"\n";

/////////////////////////////////////////////////////////
// DoublyCLL
////////////////////////////////////////////////////////

    cout<<"============================Doubly Circular LinkedList==============================\n";

    DoublyCLL dcobj;

    dcobj.InsertFirst(51);
    dcobj.InsertFirst(21);
    dcobj.InsertFirst(11);

    dcobj.InsertLast(101);
    dcobj.InsertLast(111);
    dcobj.InsertLast(121);

    dcobj.Display();

    iRet = dcobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    dcobj.InsertAtPos(105,5);
    
    dcobj.Display();

    iRet = dcobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    dcobj.DeleteAtPos(5);

    dcobj.Display();

    iRet = dcobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    cout<<"============================Doubly Circular LinkedList==============================\n";
    cout<<"\n";

    return 0;
}