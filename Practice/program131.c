//Problems On String

#include<stdio.h>

int strlenX(char * const str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        iCount++;
        str++;  // str + 1 => pointer is constant so can not increment address
        
    }

    return iCount;
    
}    

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    iRet = strlenX(Arr);    

    printf("String legnth is : %d",iRet);
    
    return 0;
}