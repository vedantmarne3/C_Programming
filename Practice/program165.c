#include<stdio.h>

typedef unsigned int UINT;

int main()
{                      // 0001 0000 0000 00000   Binary
                       //  4096       Decimal
                       
    UINT iNo = 0;
    UINT iMask = 4096; // to check 13th bit
    UINT iAns = 0;

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