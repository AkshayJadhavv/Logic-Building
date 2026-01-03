#include<stdio.h>
#include<stdbool.h>

bool CheckCharecter(char *str, char ch)
{
    while (*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    } 
    
    if(*str == ch)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter  the Charecter : \n");
    scanf(" %c",&cValue);     // space beafore %c 

    bRet = CheckCharecter(Arr,cValue);
    if(bRet == true)
    {
        printf("%c is present in %s\n",cValue,Arr);
    }
    else
    {
        printf("%c is present in %s\n",cValue,Arr);       
    }

    return 0;
}