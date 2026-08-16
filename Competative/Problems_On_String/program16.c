#include<stdio.h>

void Reverse(char *str)
{
    char *start = NULL, *end = NULL;

    start = str;

    while(*str != '\0')
    {
        str++;
    }
    str--;

    end = str;
    while(start <= end)
    {
        char temp = '\0';

        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;

    }
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    printf("%s",Arr);

    return 0;
}