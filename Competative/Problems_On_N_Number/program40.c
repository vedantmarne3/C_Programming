#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSqMeter = 0.0;

    dSqMeter = iValue * 0.0929;

    return dSqMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Arean in Square Meter : %lf\n",dRet);

    return 0;
}