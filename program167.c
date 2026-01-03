#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[50] = {'\0'};
    int iRet =0;

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlen(Arr);

    printf("Number of charecter are : %d\n",iRet);

    return 0;
}