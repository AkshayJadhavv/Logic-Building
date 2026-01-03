#include<iostream>
using namespace std;

class ArrayX    // Increasing
{
    public:
        int *Arr;
        int iSize;
        bool Sorted;

        ArrayX(int no)
        {
            iSize = no;
            Arr = new int[iSize];
            Sorted = true;
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter "<<iSize<<" elements : \n";

            int i = 0;               

            for(i = 0; i < iSize; i++)
            {
                cout<<"Enter the element no : "<<i+1<<"\n";
                
                cin>>Arr[i];

                if((i > 0) && (Sorted == true))   // Important ahe
                {
                    if(Arr[i] < Arr[i-1])
                    {
                        Sorted = false;
                    }
                }
            }
        }

        void Display()
        {
            cout<<"Elements of the Array are : \n";
            for(int i = 0; i<iSize; i++)
            {
                cout<<Arr[i]<<"\t";
            }   
            cout<<"\n";
        }
        

        void BubbleSort()
        {
            int i = 0, j = 0, temp = 0;

            if(Sorted == true)
            {
                return;
            }

            for (i = 0; i < iSize; i++)
            {
                for(j = 0; j < iSize - 1; j++)
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j + 1];
                    Arr[j + 1] = temp;
                }
                cout<<"Data after pass : "<<i+1<<"\n";
                Display(); 
            }
        }
};

int main()
{
    int iLength = 0, iValue = 0;
    bool bRet = false;

    cout<<"Enter the size of array : \n";
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);

    aobj->Accept();

    aobj->Display();

   // cout<<"Enter the element you want to search : \n";
    //cin>>iValue;

    aobj->BubbleSort();

    cout<<"Data after sorting\n";
    
    aobj->Display();
    
    delete aobj;
    
    return 0;
}