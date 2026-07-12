#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int Product(int Arr[], int iSize)
{
    int iCnt = 0;
    int iProduct = 1;
    bool bFlag = false;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iProduct = iProduct * Arr[iCnt];
            bFlag = true;
        }
    }
    if(bFlag == false)
    {
        return 0;
    }
    
    return iProduct;
    
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

    iRet = Product(Brr, iLength);

    printf("Product of Odd No. is : %d\n",iRet);

    free(Brr);

    return 0;
}