/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program39.c
//  Description :  This program accepts a number from the user and checks number is perfect or not                         
//
//  Input       : Integer (e.g., 6)
//  Output      : 1 + 2 + 3 = 6   is Perfect number
//  Input       : Integer (e.g., 12)
//  Output      : 1 + 2 + 3 + 4 + 6 = 16  is not a Perfect number
//
//  Author :       Akshay Jadhav
//  Date :         12/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
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
   
   if(iSum == iNo)
   {
        return true;
   }
   else
   {
        return false;
   }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
    
    if(bRet == true)
    {
        printf("%d is perfect number\n",iValue);
    }
    else
    {
        printf("%d is not perfect number\n",iValue);
    }

    return 0;
}