#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0;
    int *ptr = NULL;

    // Step 1 : Allocate the Memory
    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to alocate memory\n");
        return -1;
    }

    // Step 2 : Use that Memory
    // Use

    // Step 1 : Free that Memory
    free(ptr);

    return 0;
}