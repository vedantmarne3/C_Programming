#include<stdio.h>
typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        if((iNo & 1) == 0x1)
        {
            iCount++;
        }

        iNo = iNo >> 1;
    }

    return iCount;

}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);

    printf("No. of ON(1) is : %d",iRet);

    return 0;
}