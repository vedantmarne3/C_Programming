#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, UINT iStart, UINT iEnd)
{
    UINT iMask = 0x0;
    UINT iMask1 = 0;

    int i = 0;

    for(i = iStart; i <= iEnd; i++)
    {
        iMask = 0x1;       //imask pratyak veles 0001 honar 

        iMask = iMask << (i - 1);

        iMask1 = iMask1 | iMask;

    }

    iNo = iNo ^ iMask1;

    return iNo;

}
int main()
{
    UINT iValue = 0, iPos1 = 0, iPos2 = 0;
    UINT iRet = 0;

    printf("Enter Number : \n");
    scanf("%u",&iValue);

    printf("Enter Starting Position :\n");
    scanf("%u",&iPos1);

    printf("Enter Ending Position : \n");
    scanf("%u",&iPos2);

    iRet = ToggleBitRange(iValue, iPos1, iPos2);
    
    printf("Updated Value : %u",iRet);


    return 0;
}