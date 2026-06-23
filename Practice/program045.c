//INput : 5
//OutPut : -5 -3  -1 

#include<stdio.h>

void Dispaly(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= 0; iCnt = iCnt + 2) //iCnt =+ 2
    {       
        printf("%d\t",iCnt);    
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    Dispaly(iValue);

    return 0;
}