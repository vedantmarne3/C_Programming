#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;

    while (*str >= *start)
    {
        printf("%c",*str);
        str--;        
    }
    printf("\n");
    
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}