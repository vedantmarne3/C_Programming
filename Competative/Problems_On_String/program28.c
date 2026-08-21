#include<stdio.h>


void StrNCpyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}

int main()
{
    char arr[20] = "Marvellous Multi OS";

    char brr[20] = {'\0'}; //Empty astring

    StrNCpyX(arr, brr, 10);

    printf("%s",brr);

    return 0;
}