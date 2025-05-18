/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program24.c
//  Description :  This program accepts a number from the user and prints all numbers 
//                 from 1 up to the entered number
//
//  Input       : Integer (e.g., 5)
//  Output      : 1 2 3 4 5
//
//  Author :       Akshay Jadhav
//  Date :         12/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


// Input : 5
// 1 + 2 + 3 + 4 + 5 

int Summation(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d",iCnt);
    }
    
    return 0;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summation is : %d\n",iRet);

    return 0;
}

