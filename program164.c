#include<stdio.h>

void Display(char *str)
{
    int iCnt = 0;

    // for(iCnt = 0; iCnt <= *str; iCnt++,str++)
    // {
    //     printf("%c\n",*str);   // correct
    // }

    for( ; *str != '\0'; str++)        // step 1,2,3,4 are optional 
    {                                    // even if we didnt write loop works
        printf("%c\n",*str);           // correct  // can be written like this 
    }

}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}