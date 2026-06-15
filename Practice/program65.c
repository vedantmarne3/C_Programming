/*
Decimal Number System madhe -

    10(0 - 9) aastat mhanun

    -> %10 = last digit deto
    -> /10 = last digit remove karto


*/

/* ----------REASON--------

    We Use Decimal Number System

    So,
        Base = 10 : pratyak Digit chi place value 10 chya Power madhe aaste



*/

#include<stdio.h>

int main()
{
    int iNo = 751;

    int iDigit = 0;

    iDigit = iNo % 10; // Number madun Shevatcha Digit ghenyanya sathi % 10 vapartat 751 % 10 = 1
    printf("%d\n",iDigit);
    iNo = iNo/10;      // Number madhala Shevtcha Digit Remove/DELETE karnya Sathi / 10 vpartat 752 / 10 = 75

    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo/10;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo/10;


    return 0;
}