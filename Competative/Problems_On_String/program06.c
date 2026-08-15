#include<stdio.h>

void DisplayASCII()
{
    int ch = 0;

    printf("DEC\tOCT\tHEX\tCHAR\n");

    for(ch = 0; ch <= 255; ch++)
    {
        printf("%d\t%o\t%X\t%c\n",ch,ch,ch,ch);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}