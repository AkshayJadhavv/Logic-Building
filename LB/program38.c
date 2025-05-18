/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program38.c
//  Description :  This program accepts a number from the user and Calculates summation of Factor                         
//
//  Input       : Integer (e.g., 12)(-12 to 12)
//  Output      : 2 , 4 , 6
//
//  Author :       Akshay Jadhav
//  Date :         12/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;  // Updator
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
   return iSum;


}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumFactor(iValue);
    

    return 0;
}