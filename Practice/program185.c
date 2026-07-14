#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 0x1;
    UINT iNo = 0;
    UINT iPose = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    printf("Enter bit possition : \n");
    scanf("%d",&iPose);

    iMask = iMask << (iPose - 1);

    iNo = iNo ^ iMask;

    printf("Updated Number : %d",iNo);

    return 0;
}