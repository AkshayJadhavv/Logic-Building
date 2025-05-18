/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program30.c
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

#define ERR_INVALID -1

unsigned long int Factorial(unsigned int iNo)
{
    int iCnt = 0;
    unsigned long int iFact = 1;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    iCnt = 1;
    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }

    return iFact;

}

int main()
{
    unsigned int iValue = 0;
    unsigned long int iRet = 0;

    printf("Enter number : \n");
    scanf("%u",&iValue);

    iRet = Factorial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Factorial is : %lu\n",iRet);
    }

    return 0;
}

