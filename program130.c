#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
      if(Arr[iCnt] == 11)
      {
        break;
      }
    }

    if(Arr[iCnt] == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }   
}


int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    bool bRet = false;

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
    bRet = Search(ptr,iLength);

    if(bRet == true)
    {
        printf("There is 11 in Array ");
    }
    else
    {
        printf("There is no 11 in Array ");
    }

    // Step 1 : Free that Memory
    free(ptr);

    return 0;
}