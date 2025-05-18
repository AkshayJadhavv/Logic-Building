/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program46.c
//  Description :   This program accepts number from user and  prints each digit of a given                        
//                  number
//
//  Input       : Enter number : 751
//  Output      : 
//                  Digit is : 1
//                  Updated iNo : 75
//                  Digit is : 5
//                  Updated iNo : 7
//                  Digit is : 7
//                  Updated iNo : 0
//
//  Author :       Akshay Jadhav
//  Date :         13/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("Digit is : %d\n",iDigit);
        iNo = iNo / 10;
        printf("Updated iNo is : %d\n",iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ",iValue);
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}