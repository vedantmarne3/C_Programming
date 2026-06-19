/*
    START
        Accept number as No
        if No is Completely divisible by 2
            then print even
        otherwise
            print Odd
    STOP

    START
        Accept number as No
        Divide No by 2
        If remainder is 0
            then print as Even
        Otherwise
            Print as Odd
    STOP
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Number is Even!!\n");
    }
    else
    {
        printf("Number is Odd!!\n");
    }
    

    return 0;
}