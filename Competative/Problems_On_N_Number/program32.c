#include<stdio.h>

int DollerToINR(int iNo)
{
    int iCalc = 0;

    iCalc = iNo * 70;

    return iCalc;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number  of USD : \n");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is : %d",iRet);

    return 0;
}