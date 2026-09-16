#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//Position = 9th and 12th

bool ChkBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    if(((iNo & iMask1) == iMask1) || ((iNo & iMask2) == iMask2))
    {
        return true;
    }

    return false;
}

int main()
{
    UINT iValue = 0, iLocation1 = 0, iLocation2 = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    printf("Enter Position : \n");
    scanf("%d",&iLocation1);

    printf("Enter Position : \n");
    scanf("%d",&iLocation2);

    bRet = ChkBit(iValue, iLocation1, iLocation2);

    if(bRet == true)
    {
        printf("Bit is ON\n");
    }
    else{
        printf("Bit is OFF\n");
    }

    return 0;
}