#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT iPose)
{
    UINT iMask = 0x1;
    UINT iAns = 0;

    iMask = iMask << (iPose - 1);

    iAns = iMask & iNo;

    if(iAns == iMask)
    {
        return true;
    }

    return false;

}

int main()
{
    UINT iValue = 0, iLocation = 0;
    bool bRet = false;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    printf("Enter Bit Possition : \n");
    scanf("%d",&iLocation);

    bRet = ChkBit(iValue, iLocation);

    if(bRet == true)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    return 0;
}