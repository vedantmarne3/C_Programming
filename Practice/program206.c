#include<stdio.h>
#include<fcntl.h>   // file control .h

int main()
{
    int fd = 0; // file discripter

    fd = creat("Marvellous.txt",0777);  // 0777 permission

    if (fd == -1)
    {
        printf("Unable to Create file\n");
    }
    else
    {
        printf("File create Succesfully");
    }

    return 0;
}