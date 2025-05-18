// Sequence ahe 
// connected ahe 87-88-89
// nested loop explanation from 87-88-89
//

#include<stdio.h>

void Display()
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    Display();

    return 0;
}

