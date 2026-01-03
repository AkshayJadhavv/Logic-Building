#include<iostream>
using namespace std;

void Display(float Arr[], int Length)
{
    int iCnt = 0;

    cout<<"Elements of the array are : \n";
    for(iCnt = 0; iCnt < Length; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int Size;
    int iCnt;

    cout<<"Enter the size of array : ";
    cin>>Size;

    float *ptr = new float[Size];

    cout<<"Enter the elements : \n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    Display(ptr,Size);

    return 0;
}