#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//Position = 9th and 12th

bool ChkBit(UINT iNo)
{
    UINT iMask1 = 0x100;           //0000 0000 0000 0000 0000 0001 0000 0000
    UINT iMask2 = 0x800;          //                          1000 0000 0000
    
    int Ans1 = iMask1 & iNo;
    int Ans2 = iMask2 & iNo;

    if(Ans1 == iMask1 || Ans2 == iMask2)
    {
        return true;
    }

    return false;
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("Bit is ON\n");
    }
    else{
        printf("Bit is OFF\n");
    }

    return 0;
}