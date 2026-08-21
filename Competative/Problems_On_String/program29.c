#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src;
            dest++;
        }
        src++;
        
    }
    *dest = '\0';
}

int main()
{
    char arr[20] = "Marvellous Multi OS";

    char brr[20] = {'\0'}; //Empty astring

    StrCpyCap(arr, brr);

    printf("%s",brr);

    return 0;
}