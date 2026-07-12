#include<stdio.h>
#include<stdlib.h>

int Frequncy(int Arr[], int iSize)
{
    int iCnt = 0, iEven = 0, iOdd = 0;
    int iDiff = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }   
    }
    iDiff = iEven - iOdd;

    return iDiff;
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

    printf("Difference of Even frequency and Odd frequency : %d",iRet);

    free(Brr);

    return 0;
}