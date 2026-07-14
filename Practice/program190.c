#include<stdio.h>

typedef unsigned int UINT;

// position : 13        //1111 1111 1111 1111 1110 1111 1111 1111
int main()
{
    UINT iMask = 0xFFFFEFFF;
    UINT iNo = 0;
    UINT iPose = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    iNo = iNo & iMask;

    printf("Updated Number : %d",iNo);

    return 0;
}