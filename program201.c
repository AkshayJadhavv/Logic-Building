#include<stdio.h>
#include<stdbool.h>

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

    bRet = strpalindromeX(Arr);

    if(bRet == true)
    {
        printf("String is palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }

    return 0;
}

// Time Complexity 0(N+N/2)