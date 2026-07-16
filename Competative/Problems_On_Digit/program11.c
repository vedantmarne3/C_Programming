#include<stdio.h>
#include<stdlib.h>


void Digit(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0, iNo = 0;

    printf("Three Digit numbers are : ");
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iNo = Arr[iCnt];
        iCount = 0;

        while(iNo != 0)
        {
            iCount++;
            iNo = iNo/10;
        }

        if(iCount == 3)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *Brr = NULL;
    
    printf("Enter no of element : \n");
    scanf("%d",&iLength);
;

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

    Digit(Brr, iLength);

    free(Brr);

    return 0;
}