// Display Digits in String 

#include<stdio.h>


void DisplayDigit(char *str)
{
    printf("Numbers in Strin is : ");
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);


    return 0;
}