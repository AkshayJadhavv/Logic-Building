#include<stdio.h>

void Display(int *ptr, int iSize)
{
    printf("Elements of the array are : \n");
    printf("%d\n",*ptr);
    ptr++; // Address 104
    printf("%d\n",*ptr);
    ptr++; // 108
    printf("%d\n",*ptr);
    ptr++; // 112
    printf("%d\n",*ptr);
    ptr++; // 116
    printf("%d\n",*ptr);
    ptr++;
}

int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display(Arr,5); // Display(100,5)

    return 0;
}