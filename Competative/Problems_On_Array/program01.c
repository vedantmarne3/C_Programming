#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iEven = 0, iOdd = 0, iCnt = 0;
    int iDiff = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEven = iEven + Arr[iCnt];
        }
        else
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }

    iDiff = iOdd - iEven;

    return iDiff;

}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *P = NULL;

    printf("Enter no of element : \n");
    scanf("%d",&iLength);

    P = (int *)malloc(iLength * sizeof(int));

    if(P == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&P[iCnt]);
    }

    iRet = Difference(P, iLength);

    printf("Difference is : %d",iRet);

    free(P);

    return 0;
}