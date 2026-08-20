// count whitespase

#include<stdio.h>


int whitespase(char *str)
{
    int cnt = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            cnt++;
        }
        str++;
    }

    return cnt;
}

int main()
{
    char Arr[20] = {'\0'};

    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = whitespase(Arr);

    printf("Number of whitespaces in string is : %d",iRet);

    return 0;
}