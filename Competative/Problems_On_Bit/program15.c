#include<stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0xf;

    iNo = iNo | iMask;

    return iNo;
    
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);

    printf("Updated Value : %d",iRet);


    return 0;
}