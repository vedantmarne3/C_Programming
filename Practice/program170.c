#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0X1;       // 0000 0000 0000 0000 0000 0000 0000 0001  Binarys
    UINT iAns = 0;
    UINT iPose = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    printf("Enter the possition : \n");
    scanf("%d",&iPose);

    iMask = iMask << (iPose - 1);  // 0000 0000 0000 0000 0000 0010 0000 0000  (ipose = 10)

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("Bit is On\n");
    }
    else
    {
        printf("Bit is Off\n");
    }



    return 0;
}