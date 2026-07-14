#include<stdio.h>

typedef unsigned int UINT;


// position 28;
int main()
{
    UINT iMask = 0;
    int iNo = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    iMask = 0X08000000;

    iNo = iNo ^ iMask;

    printf("Updated Number : %d",iNo);

    return 0;
}