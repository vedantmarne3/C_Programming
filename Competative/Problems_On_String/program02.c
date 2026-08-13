//Problems on String

#include<stdio.h>
#include<stdbool.h>


bool ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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
        printf("It is Capital charcter...\n");
    }
    else
    {
        printf("It is not a Capital Character...\n");
    }

    return 0;
}
