//converting string in lower case

#include<stdio.h>

void strlower(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    strlower(arr);

    printf("Modified String is : %s",arr);

    return 0;
}