#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 1;
    if(iNo <= 0)
    {
        return;
    }

    for(iCnt; iCnt <= iNo; iCnt++)
    {           
        printf("%d\t",iCnt*2);
    }
      
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

}