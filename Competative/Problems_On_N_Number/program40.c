#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFactEven = 1, iFactOdd = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFactEven = iFactEven * iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFactOdd = iFactOdd * iCnt;
        }
    }

    iDiff = iFactEven - iFactOdd;

    return iDiff;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is : %d",iRet);

    return 0;
}