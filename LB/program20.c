/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program20.c
//  Description :  Check whether number is even or not
//  Author :       Akshay Jadhav
//  Date :         12/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    bool bResult = false;

    if((iNo % 2) == 0 )
    {
        bResult = true;
    }
    else
    {
        bResult = false;
    }

    return bResult; 
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number to check whether it is even or odd : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is even number\n");
    }
    else
    {
        printf("%d is odd number\n");
    }

    return 0;
}