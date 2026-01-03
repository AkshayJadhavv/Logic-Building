#include<stdio.h>
#include<stdlib.h>

int Maxium(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid Input\n");
        return -1;
    }


    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;   // change here
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0, iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\nEnter the number %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }


    iRet = Maxium(iPtr, iLength);

    printf("Maxium element is : %d\n",iRet);
    
    free(iPtr);

    return 0;
}