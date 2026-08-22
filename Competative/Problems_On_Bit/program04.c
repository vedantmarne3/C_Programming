#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(int iNo)
{
    UINT iMask = 0x80000001; // last and first bit
    UINT iAns = 0;

    iAns = iMask & iNo;

    if(iAns == iMask)
    {
        return true;
    }

    return false;
}

int main()
{
    UINT iValue = 0;
    bool bRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

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