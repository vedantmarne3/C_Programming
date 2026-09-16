#include<stdio.h>
typedef unsigned int UINT;

void CommonBit(UINT iNo1, UINT iNo2) //common On Bit
{
    UINT iMask = 0, iPos = 1;

    iMask = iNo1 & iNo2;

    while (iMask != 0)
    {
        if((iMask & 1) == 1)
        {
            printf("%d\t",iPos);
        }
        iMask = iMask >> 1;
        iPos++;
    }
    
}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter 1st Number : \n");
    scanf("%d",&iValue1);

    printf("Enter 2nd Number : \n");
    scanf("%d",&iValue2);

    CommonBit(iValue1, iValue2);
    
    return 0;
}