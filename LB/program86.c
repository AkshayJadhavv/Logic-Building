// Input : 4  #
// Output : # # # #

// Input : 5  &
// Output : & & & & &

// Input : 3  z
// Output : z z z


#include<stdio.h>

void Display(int iNo, char ch)
{
    int iCnt = 0;
    
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)  // 2N
    {
        printf("%c\t",ch);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    char cValue = 0;

    printf("Enter Frequenncy : \n");
    scanf("%d",&iValue);

    printf("Enter Charcter : \n");
    scanf(" %c",&cValue);               // hithe space dila ahe scanf chya addhi 
                                        // (karan 85 madhe kahich print hot navta)(reference 85 & 86)    
    printf("Accepted value is : %c\t",cValue);

    Display(iValue,cValue);

    return 0;
}


// Time Complexity O(N)
// N is natural number
// Where N >= 0 and N <= Infinity