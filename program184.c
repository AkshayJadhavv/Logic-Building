#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    // Problem solved to buffer cleanup
    printf("Enter  the Charecter : \n");
    scanf(" %c",&cValue);     // space beafore %c 

    return 0;
}