#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize)
{
    int iCnt = 0;

    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFlag = true;
        }   
    }
    
    return bFlag ;
}

int main()
{
    int iLength = 0, iCnt = 0;
    bool bRet = false;
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

    bRet = Check(Brr, iLength);

    if(bRet == true)
    {
        printf("11 is Present\n");
    }
    else
    {
        printf("11 is not Present\n");
    }

    free(Brr);

    return 0;
}