#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iDiff = 0;
    int iMin = 0, iMax = 0;

    iMin = Arr[0];
    iMax = Arr[0];
    

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] <= iMin)
        {
            iMin = Arr[iCnt];
        }
        else if(Arr[iCnt] >= iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    iDiff = iMax - iMin;

    return iDiff;
    
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

    iRet = Difference(Brr, iLength);

    printf("Difference Between largest & smallest is : %d\n",iRet);

    free(Brr);

    return 0;
}