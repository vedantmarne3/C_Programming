#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance in Kilometer : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter : %d\n",iRet);

    return 0;
}