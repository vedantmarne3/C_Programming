#include<stdio.h>

int main()
{
    char Arr[] = "tnadev";

    char *i = Arr;

    char *cVed = i;

    while (*i != '\0')
    {
        i++;
    }
    i--;

    char *cVai = i;

    while(cVed <= cVai)
    {
        char temp;

        temp = *cVed;
        *cVed = *cVai;
        *cVai = temp;

        cVed++;
        cVai--;

    }

    printf("%s",Arr);


    return 0;
}