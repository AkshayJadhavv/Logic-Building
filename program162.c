#include<stdio.h>

void Display(char str[])
{
    printf("%c\n",str[0]);   // Str jaga badlat nahi  // 100 ithe thmabun to sglyna call karto
    
    printf("%c\n",str[1]);

    printf("%c\n",str[2]); 

    printf("%c\n",str[3]);
    
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}