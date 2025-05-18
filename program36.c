/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program36.c
//  Description :  This program accepts a number from the user and Display its Factors  
//                 or NonFactors if user enters negative number it convert into 
//                  postive number(updator)            
//
//  Input       : Integer (e.g., 12)(-12 to 12)
//  Output      : Factor is :1 ,2 ,3, 4, 6
//                NonFactor is : 5,7,8,9,10,11
//  Author :       Akshay Jadhav
//  Date :         12/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactorNonFactor(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;  // Updator
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("Factor is: %d\n",iCnt);
        }
        else
        {
            printf("Non Factor is :%d\n",iCnt);
        }
    }


}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactorNonFactor(iValue);

    return 0;
}