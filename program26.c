/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program26.c
//  Description :  This program accepts a number from the user and Calculates the Factorial of
//                  that number               
//
//  Input       : Integer (e.g., 5)
//  Output      : Factorial is : 120
//
//  Author :       Akshay Jadhav
//  Date :         12/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);

    return 0;
}

