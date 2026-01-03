#include<iostream>
using namespace std;


int main()
{
    int Length;
    int iCnt = 0;

    cout<<"Enter the size of array : ";
    cin>>Length;

    int *ptr = new int[Length];

    cout<<"Enter the elements : \n";
    for(iCnt = 0; iCnt < Length; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of the array are : \n";
    for(iCnt = 0; iCnt < Length; iCnt++)
    {
        cout<<ptr[iCnt]<<"\n";
    }

    return 0;
}