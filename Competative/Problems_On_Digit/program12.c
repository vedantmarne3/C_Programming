#include<stdio.h>
#include<stdlib.h>


void DigitSum(int Arr[], int iSize)
{
    int iCnt = 0, iNo = 0, iSum = 0, iDigit = 0;

    printf("Addition of digit are : ");
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iNo = Arr[iCnt];
        
        iDigit = 0;
        iSum = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo/10;
        }

        printf("\t%d\t",iSum);
        
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

    DigitSum(Brr, iLength);

    free(Brr);

    return 0;
}