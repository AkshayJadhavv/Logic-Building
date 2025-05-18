/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program41.c
//  Description :  This program accepts a number from the user and checks number is Perfect or not                         
//
//  Input       : Integer (e.g., 6)
//  Output      : 1 + 2 + 3 = 6   is Perfect number
//  Input       : Integer (e.g., 12)
//  Output      : 1 + 2 + 3 + 4 + 6 = 16  is not a Perfect number
//
//  Author :       Akshay Jadhav
//  Date :         13/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
           iSum = iSum + iCnt; 
        }
    }

    if(iSum == iNo)
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is perfect number");
    }
    else
    {
        printf(%d is not perfect number);
    }

    return 0;
}