#include<stdio.h>

typedef unsigned int UINT;

// position : 4

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x1;
    UINT iResult = 0;

    if(iPos < 1 || iPos > 32)       // Filter
    {
        printf("Invalid Bit Possition\n");
        return iNo;
    }

    iMask = iMask << (iPos - 1);

    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0, iLocation = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    printf("Ebter bit possition : \n");
    scanf("%d",&iLocation);


    iRet = OffBit(iValue, iLocation);



    printf("Upadated Number is : %d",iRet);


    return 0;
}