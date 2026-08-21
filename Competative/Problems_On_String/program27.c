#include<stdio.h>


void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[20] = "Marvellous Multi OS";

    char brr[20] = {'\0'}; //Empty astring

    StrCpyX(arr, brr);

    printf("%s",brr);

    return 0;
}