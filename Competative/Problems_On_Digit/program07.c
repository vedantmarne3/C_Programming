#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0;

    bool bFlag = false; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 0)
        {
            return bFlag = true;
        }
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contain Zero\n");
    }
    else
    {
        printf("It not contain Zero\n");
    }
    
    return 0;
}
