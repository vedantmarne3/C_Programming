#include<stdio.h>

int Difference(char *str)
{
    int iCapital = 0, iSmall = 0;
    int Difference = 0;

    char *temp = str;

    while(*str != '\0')
    {
 
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }

        str++; 
    }

    while(*temp != '\0')
    {

        if(*temp >= 'a' && *temp <= 'z')
        {
            iSmall++;
        }

        temp++;
    }


    Difference = iSmall - iCapital;


    return Difference;
}
int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("Difference of Small Character and Capital is : %d\n",iRet);


    return 0;
}