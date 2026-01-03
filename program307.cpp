#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int iLength = 5)  // parametrized constructor with argument
        {
            cout<<"Inside constructor\n";
            iSize = iLength;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside Destructor\n";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the element : \n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Element of the array are : \n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }
        
};
// ha code lihu nayee
int main()
{
    ArrayX aobj(5);

    aobj.Arr = NULL; // error beacuse access specifier

    aobj.Accept();
    aobj.Display();
    return 0;
}