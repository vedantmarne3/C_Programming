#include<stdio.h>

typedef unsigned int UINT;

int main()
{

    // Largest value of int
    UINT iMask = 0xffffffff; //4294967295 
    
    printf("%u\t%X\n",iMask,iMask);
    

    return 0;
}