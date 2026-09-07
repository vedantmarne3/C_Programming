#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(int iNo)
{
    UINT iMask = 0xffffffbf;

    iNo = iMask & iNo;

    return iNo;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("Updated Value : %d",iRet);

    return 0;
}