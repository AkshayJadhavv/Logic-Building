#include<stdio.h>

int strlenX(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet =0;

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("%d\n",iRet);

    return 0;
}