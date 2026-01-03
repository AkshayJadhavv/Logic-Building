#include<iostream>
using namespace std;

template <class T>
T Summation(T Arr[], int Length)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < Length; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Size;
    float Ret;
    int iCnt = 0;

    cout<<"Enter the size of array : ";
    cin>>Size;

    float *ptr = new float[Size];

    cout<<"Enter the elements : \n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    Ret = Summation(ptr,Size);

    cout<<Ret<<"\n";

    delete []ptr;
    return 0;
}