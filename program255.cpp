#include<iostream>
using namespace std;

template<class T>
T Maximum(T No1, T No2, T No3)
{   
    if((No1 > No2) && No1 > No3)
    {
        return No1;
    }
    else if(No2 > No1 && No2 > No3)
    {
        return No2;
    }
    else 
    {
        return No3;
    }
}

int main()
{
    cout<<Maximum(10.34f,25.5f,35.4f)<<"\n";
    cout<<Maximum(15.45,20.4,24.7)<<"\n";
    cout<<Maximum(17,24,27)<<"\n";

    return 0;
}
