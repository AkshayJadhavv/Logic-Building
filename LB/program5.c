/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program2.c
//  Description :  Used to calculate percentage 
//  Author :       Akshay Jadhav
//  Date :         28/04/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

float CalculatePercentage(int iTotalMarks, int iObtainedMarks)
{
    float fPercentageValue = 0.0f;
    fPercentageValue = ((float)iObtainedMarks / (float)iTotalMarks) * 100;
    return fPercentageValue;
}

int main()
{
    int iTotal = 0;
    int iObtained = 0;
    float fPercentage = 0.0f;

    printf("Enter your total marks : \n");
    scanf("%d",&iTotal);

    printf("Enter your total marks : \n");
    scanf("%d",&iObtained);
    
    //Percentage = ((float)Obtained / Total) * 100;
    fPercentage = CalculatePercentage(iTotal,iObtained);

    printf("Percentage is : %.2f%%\n",fPercentage);

    return 0;
}