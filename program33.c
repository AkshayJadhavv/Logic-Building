/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program33.c
//  Description :  This program accepts a number from the user and Display its Factors              
//
//  Input       : Integer (e.g., 12)
//  Output      : 1 ,2 ,3, 4, 6
//
//  Author :       Akshay Jadhav
//  Date :         12/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }


}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}