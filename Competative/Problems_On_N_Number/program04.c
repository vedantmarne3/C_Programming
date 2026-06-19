#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return 1;
    }
    else 
    {
        return -1;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == 1)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}