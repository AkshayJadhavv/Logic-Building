/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program22.c
//  Description :  Check whether number is Divisble 5 or not
//  Author :       Akshay Jadhav
//  Date :         12/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

bool CheckDivisble(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number to check whether it is by 5 : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisble(iValue);

    if(bRet == true)
    {
        printf("%d is divisble by 5 number\n");
    }
    else
    {
        printf("%d is not divisble by 5 number\n");
    }

    return 0;
}