////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program50.c
//  Description :   This program accepts number from user and Calculate sumation of digits                        
//                   in number
//
//  Input       : Enter number : 5261
//  Output      : Number of Digits are : 2 , 6
//                  
//
//  Author :       Akshay Jadhav
//  Date :         13/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Summation of digits are : %d\n",iRet);

    return 0;
}