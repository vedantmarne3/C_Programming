#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xf000000f;

    iNo = iNo ^ iMask;    

    return iNo;

}

int main()
{
    UINT iValue = 0, iRet = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated Value : %u",iRet);

    return 0;
}

//imask 0x1 ni he solve kar position