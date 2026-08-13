//Problems on String

#include<stdio.h>
#include<stdbool.h>


bool ChkCapital(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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
        printf("It is Small case charcter...\n");
    }
    else
    {
        printf("It is not a Small case Character...\n");
    }

    return 0;
}
