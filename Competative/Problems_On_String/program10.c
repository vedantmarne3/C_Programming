#include<stdio.h>

void Display(char ch)
{
    printf("Decimal : \t%d\n",ch);
    printf("Octal : \t%o\n",ch);
    printf("Hexadicimal : \t%X\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}