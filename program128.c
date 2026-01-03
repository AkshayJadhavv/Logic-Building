#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }
    return iCount;
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
    iRet = CountEven(ptr,iLength);

    printf("Count of Even number is : %d\n",iRet);

    // Step 1 : Free that Memory
    free(ptr);

    return 0;
}