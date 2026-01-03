#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[] = "India is my country";

    printf("Enter the File name you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_WRONLY | O_APPEND);    // Change
    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File is succesfully opend with fd : %d\n",fd);

        iRet = write(fd,Buffer,strlen(Buffer));

        printf("%d bytes gets written sucessfully\n",iRet);

        close(fd);
    }

    return 0;
}

