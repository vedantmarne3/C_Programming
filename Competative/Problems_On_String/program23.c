// converting in Upper case 

#include<stdio.h>


void strupper(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strupper(Arr);

    printf("Modified string is : %s",Arr);

    return 0;
}