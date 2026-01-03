#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int no)
        {
            iSize = no;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter "<<iSize<<" elements : \n";
            for(int i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
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
        
        bool LinearSearch(int no)       // complexity -> O(n)
        {
            for(int i = 0; i < iSize; i++)
            {
                if(Arr[i] == no)
                {
                    return true;
                }
            }
            return false;
        }

        bool BiDirectionalSearch(int no)            // complexity -> O(n/2)
        {
            int iStart = 0, iEnd = iSize-1;

            while(iStart <= iEnd)
            {
                if(Arr[iStart] == no || Arr[iEnd] == no)
                {
                    return true;
                }
                iStart++;
                iEnd--;
            }
            return false;
        }

        bool BinarySearchInc(int no)
        {
            int iStart = 0, iEnd = 0, iMid = 0;
            bool bFlag = false;

            iStart = 0;
            iEnd = iSize - 1;

            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if(Arr[iMid] == no)
                {
                    bFlag = true;
                    break;
                }
                else if(no < Arr[iMid])  // First half(left window)
                {   
                    iEnd = iMid - 1;
                }
                else if(no > Arr[iMid])  // Second half(right window)
                {
                    iStart = iMid + 1;
                }
            } // End of while
            return bFlag; 
        }

        bool BinarySearchDec(int no)
        {
            int iStart = 0, iEnd = 0, iMid = 0;
            bool bFlag = false;

            iStart = 0;
            iEnd = iSize - 1;

            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if(Arr[iMid] == no)
                {
                    bFlag = true;
                    break;
                }
                else if(no > Arr[iMid])  // First half(left window)
                {   
                    iEnd = iMid - 1;
                }
                else if(no < Arr[iMid])  // Second half(right window)
                {
                    iStart = iMid + 1;
                }
            } // End of while
            return bFlag; 
        }

        bool BinarySearchEfficientInc(int no)
        {
            int iStart = 0, iEnd = 0, iMid = 0;
            bool bFlag = false;

            if(!CheckSortedInc())    // New
            {
                cout<<"Data is not sorted\n";
                
                return LinearSearch(no);    // Important ahe 
            }

            iStart = 0;
            iEnd = iSize - 1;

            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if(Arr[iMid] == no || Arr[iStart] == no || Arr[iEnd] == no)    // change
                {
                    bFlag = true;
                    break;
                }
                else if(no < Arr[iMid])  // First half(left window)
                {   
                    iEnd = iMid - 1;
                }
                else if(no > Arr[iMid])  // Second half(right window)
                {
                    iStart = iMid + 1;
                }
            } // End of while
            return bFlag; 
        }

        bool BinarySearchEfficientDec(int no)
        {
            int iStart = 0, iEnd = 0, iMid = 0;
            bool bFlag = false;

            iStart = 0;
            iEnd = iSize - 1;

            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if(Arr[iMid] == no || Arr[iStart] == no || Arr[iEnd] == no)    // change
                {
                    bFlag = true;
                    break;
                }
                else if(no > Arr[iMid])  // First half(left window)
                {   
                    iEnd = iMid - 1;
                }
                else if(no < Arr[iMid])  // Second half(right window)
                {
                    iStart = iMid + 1;
                }
            } // End of while
            return bFlag; 
        }

        bool CheckSortedInc()
        {
            bool bFlag = true;
            int i = 0;

            for(i = 0; i < iSize-1; i++)
            {
                if(Arr[i] > Arr[i+1])  // Change kel ahe
                {
                    bFlag = false;
                    break;
                }
            }

            return bFlag;
        }

        bool CheckSortedDec()
        {
            bool bFlag = true;
            int i = 0;

            for(i = 0; i < iSize-1; i++)
            {
                if(Arr[i] < Arr[i+1])  
                {
                    bFlag = false;
                    break;
                }
            }

            return bFlag;
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

    cout<<"Enter the element you want to search : \n";
    cin>>iValue;

    bRet = aobj->BinarySearchEfficientInc(iValue);

    if(bRet == true)
    {
        cout<<"Element is present\n";
    }   
    else 
    {
        cout<<"Element is not present\n";
    }
    
    delete aobj;
    
    return 0;
}