#include<stdio.h>

//java madhe package create karay che tyachyat bitwise che operation

typedef unsigned int UINT;

// position 3 & 8
int main()
{
    UINT iMask1 = 0x00000004;
    UINT iMask2 = 0x00000080;
    UINT iMask = 0;
    UINT iNo = 0, iResult = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iMask  = iMask1 | iMask2;
    
    iResult = iNo ^ iMask;

    printf("Upadated number : %d\n",iResult);

    return 0;

}