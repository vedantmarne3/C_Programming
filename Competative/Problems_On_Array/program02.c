#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    
    
    printf("Elements which is Divisible By 5 : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }    
    }
    
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *Brr = NULL;

    printf("Enter no of element : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    Display(Brr, iLength);

    free(Brr);

    return 0;
}