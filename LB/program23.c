/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program23.c
//  Description :  Check whether number is Divisble 5 or not
//  Author :       Akshay Jadhav
//  Date :         12/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisble(int iNo)
{
    if(((iNo % 3 == 0)) && ((iNo % 5)== 0))
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

    printf("Enter number to check whether it is divisble by 3 & 5 number : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisble(iValue);

    if(bRet == true)
    {
        printf("%d is divisble by 3 & 5 number\n");
    }
    else
    {
        printf("%d is not divisble by 3 & 5 number\n");
    }

    return 0;
}