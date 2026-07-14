#include<stdio.h>

typedef unsigned int UINT;

// position : 4
int main()
{
    UINT iMask = 0xFFFFFFF7;
    UINT iNo = 0;
    UINT iPose = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    iNo = iNo & iMask;

    printf("Updated Number : %d",iNo);

    return 0;
}