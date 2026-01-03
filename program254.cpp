#include<iostream>
using namespace std;


double Maximum(double No1, double No2, double No3)
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
    cout<<Maximum(10.34,25.5,35.4)<<"\n";
    cout<<Maximum(15.45,20.4,24.7)<<"\n";

    return 0;
}
