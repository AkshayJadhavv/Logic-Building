#include<stdio.h>

void Count(char *str)
{
    int iCountCap = 0, iCountSmall = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        str++;
    }
    printf("Number of Small charecter are : %d\n",iCountSmall);
    printf("Number of Capital charecter are : %d\n",iCountCap);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    Count(Arr);

    return 0;
}