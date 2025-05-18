/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program43.c
//  Description :  This program accepts a number from the user and checks number is Prime or not                         
//
//  Input       : Integer (e.g., 11)
//  Output      : is prime number
//  Input       : Integer (e.g., 12)
//  Output      : not prime number
//
//  Author :       Akshay Jadhav
//  Date :         13/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
           break;
        }
    }
    
    return (iCnt > (iNo / 2));

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number",iValue);
    }
    else
    {
        printf("%d is not prime number",iValue);
    }

    return 0;
}