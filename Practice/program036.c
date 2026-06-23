//INput : 5
//OutPut : 0 1 2 3 4 

#include<stdio.h>

void Dispaly(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
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