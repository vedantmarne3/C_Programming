#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0, iLocation = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    printf("Ebter bit possition : \n");
    scanf("%d",&iLocation);


    iRet = ToggleBit(iValue, iLocation);

    printf("Upadated Number is : %d",iRet);


    return 0;
}