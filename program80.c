// Input : 4
// Output : 4 3 2 1 
/*
4
3
2
1
0
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo; iCnt >= 0; iCnt--)
    {
        printf("%d\n",iCnt);
    }
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