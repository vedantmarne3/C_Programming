//For Toggale

#include<stdio.h>

typedef unsigned int UINT;

//position = 4
int main()
{
    UINT iMask = 0;
    int iNo = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    iMask = 0X8;

    iNo = iNo ^ iMask;

    printf("Updated Number : %d",iNo);

    return 0;
}