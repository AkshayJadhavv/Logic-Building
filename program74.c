// Input : 4
// Output : * * * * *

/*
    Start
        Accept the Frequency
        Iterate from 1 to that frequency
            Display * in screen
        continue
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Frequenncy : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}


// Time Complexity O(N)
// N is natural number
// Where N >= 0 and N <= Infinity