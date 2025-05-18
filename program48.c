///////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program48.c
//  Description :   This program accepts number from user and Counts number of digit                        
//                   in number
//
//  Input       : Enter number : 751
//  Output      : Number of Digits are : 3
//                  
//
//  Author :       Akshay Jadhav
//  Date :         13/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountDigits(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}