#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x1000;    //0000 0000 0000 0000 0001 0000 0000 0000   Binary Decimal
    UINT iAns = 0;           //  0   0     0    0   1    0     0   0     hexa Decimal

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("13th Bit is On\n");
    }
    else
    {
        printf("13th bit is Off\n");
    }



    return 0;
}