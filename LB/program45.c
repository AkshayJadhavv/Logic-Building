/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program45.c
//  Description :   This program prints each digit of a given integer                        
//
//  Input       : Hardcoded integer (751)
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

int main()
{
    int iNo = 751;
    int iDigit = 0;

    iDigit = iNo % 10;
    printf("Digit is : %d\n",iDigit);                // 1
    iNo = iNo / 10;
    printf("Updated iNo : %d\n",iNo);     // 75

    iDigit = iNo % 10;
    printf("Digit is : %d\n",iDigit);                // 5
    iNo = iNo / 10;
    printf("Updated iNo : %d\n",iNo);     // 7

    iDigit = iNo % 10;                    // 7
    printf("Digit is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("Updated iNo : %d\n",iNo);     // 0

    return 0;
}