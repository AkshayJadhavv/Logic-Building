#include<stdio.h>
#include<stdbool.h>


void strlwX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
    
}

// Palindrome for string 
bool strpalindromeX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    bool bFlag = true;

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;   // end bhetala

    while(start < end)   
    {
        if(*start != *end)
        {
            bFlag = false;
            break;
        }
        start++;
        end--;
    }

    return bFlag;    
}

int main()
{
    char Arr[50] = {'\0'};
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    
    strlwX(Arr);
    printf("Update string is : %s\n",Arr);

    bRet = strpalindromeX(Arr);

    if(bRet == true)
    {
        printf("String is palindrome\n");
    }
    else
    {
        printf("String is not palindrome\n");
    }

    return 0;
}

