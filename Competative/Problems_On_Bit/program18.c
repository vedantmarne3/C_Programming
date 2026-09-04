#include<stdio.h>
typedef unsigned int UINT;

UINT Toggle(UINT iNo)
{
    UINT iMask = 0x40;

    iNo = iNo ^ iMask;

    return iNo;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Toggle(iValue);

    printf("Updated Value : %d",iRet);

    return 0;
}