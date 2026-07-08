#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    
    int iSumEven = 0, iSumOdd = 0, iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iNo = iNo/10;
    }

    iDiff = iSumEven - iSumOdd;

    return iDiff;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Number of Odd number is : %d",iRet);
    
    return 0;
}