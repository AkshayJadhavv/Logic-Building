#include<iostream>
using namespace std;

template<class T>
T Addition(T iNo1, T iNo2)
{
    T iAns = 0;

    iAns = iNo1 + iNo2;

    return iAns;
}

int main()
{
    int a = 10, b = 11;
    int Ret1 = 0;

    Ret1 = Addition(a, b);
    cout<<"Addition is  : "<<Ret1;

    double x = 10, z = 11;
    double Ret2 = 0;

    Ret2 = Addition(x, z);
    cout<<"Addition is  : "<<Ret2;

    return 0;
}