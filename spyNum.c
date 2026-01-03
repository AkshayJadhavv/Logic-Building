#include<stdio.h>
#include<stdbool.h>

bool CheckSpyNumber(int no)
{
    int iDigit = 0;
    int iSum = 0, iMulti = 1;
    
    while(no > 0)
    {
        iDigit = no % 10;

        iSum = iSum + iDigit;
        iMulti = iMulti * iDigit;

        no = no / 10;
    }

    printf("%d\n",iSum);
    printf("%d\n",iMulti);

    if(iSum == iMulti)
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
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckSpyNumber(iValue);

    if(bRet == true)
    {
        printf("It is spy number\n");
    }
    else
    {
        printf("It is not spy number\n");
    }

    return 0;
}