#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBits(UINT iNo, UINT iPose1, UINT iPose2)
{
    UINT iMask1 = 0x1, iMask2 = 0x1, iMask = 0;
    UINT iResult = 0;

    iMask1 = iMask1 << (iPose1 - 1);
    
    iMask2 = iMask2 << (iPose1 - 1);

    iMask = iMask1 | iMask2;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation1 = 0, iLocation2 = 0, iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Enter 1st Bit possition \n");
    scanf("%d",&iLocation1);

    printf("Enter 2nd Bit possition \n");
    scanf("%d",&iLocation2);

    iRet = ToggleBits(iValue, iLocation1, iLocation2);

    printf("Updated number : %d\n",iRet);
    
    return 0;

}