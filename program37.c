/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program37.c
//  Description :  This program accepts a number from the user and Display its Even Factors  
//                 if user enters negative number it convert into postive number(updator)                           
//
//  Input       : Integer (e.g., 12)(-12 to 12)
//  Output      : 2 , 4 , 6
//
//  Author :       Akshay Jadhav
//  Date :         12/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;  // Updator
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
                printf("Even Factor is: %d\n",iCnt);
        }
    }


}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}