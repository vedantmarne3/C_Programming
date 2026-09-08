#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, UINT iPose)
{
    UINT iMask = 0x1;

    iMask = iMask << (iPose - 1);

    iNo = iNo | iMask;

    return iNo;

}

int main()
{
    UINT iValue = 0, iLocation = 0, iRet = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    printf("Enter Bit position : \n");
    scanf("%d",&iLocation);

    iRet = OnBit(iValue, iLocation);

    printf("Updated Value : %d",iRet);

    return 0;
}