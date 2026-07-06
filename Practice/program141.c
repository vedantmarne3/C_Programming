//Problems On String

#include<stdio.h>

void Update(char * str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if(*str == 'l')
        {
            *str = '-';

        }
        
        str++;  
        
    }

}    

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%['^'\n]s",Arr);

    Update(Arr);    

   printf("Updated String is : %s",Arr);
    
    return 0;
}