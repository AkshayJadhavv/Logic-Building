#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;

    // Step 1 : Allocate the Memory
    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to alocate memory\n");
        return -1;
    }

    printf("Enter the Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    


    // Step 2 : Use that Memory
    // Use
    iRet = Summation(ptr,iLength);

    printf("Addition is : %d\n",iRet);

    // Step 1 : Free that Memory
    free(ptr);

    return 0;
}