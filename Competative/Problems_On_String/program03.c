//Problems on String

#include<stdio.h>
#include<stdbool.h>


bool ChkCapital(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char  cValue = '\0';
    bool bRet = false;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is Digit...\n");
    }
    else
    {
        printf("It is not a Digit...\n");
    }

    return 0;
}
