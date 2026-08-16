#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' ||*str == 'o' || *str == 'u')
        {
            bFlag = true;
            break;
        }
        else
        {
            bFlag;
        }

        str++;
    }
}

int main()
{

    char Arr[20] = {'\0'};
    bool bRet = false;

    printf("Ente String : \n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == true)
    {
        printf("It contain vowel!!\n");
    }
    else
    {
        printf("There is No vowel\n");
    }

    return 0;
}