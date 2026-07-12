#include<stdio.h>
#include<stdlib.h>

int Frequncy(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }    
    return iCount;
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

    iRet = Frequncy(Brr, iLength);

    printf("Frequency of 11 in Array : %d",iRet);

    free(Brr);

    return 0;
}