#include<stdio.h>

typedef unsigned int UINT;

int main()
{                       // 0000 0000 0000 0000 0000 0000 0100 0000   Binary Decimal
                        //  0     0    0    0   0     0    4    0   Hexa decimal
    UINT iNo = 0;
    UINT iMask = 0X40; // to check 7th bit
    UINT iAns = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("7th Bit is On\n");
    }
    else
    {
        printf("7th bit is Off\n");
    }



    return 0;
}