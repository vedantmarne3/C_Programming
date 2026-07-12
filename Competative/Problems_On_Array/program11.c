#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }    
    return bFlag;
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
    int *Brr = NULL;
    bool bRet = false;

    printf("Enter no of element : \n");
    scanf("%d",&iLength);

    printf("Enter Number : \n");
    scanf("%d",&iValue);

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

    bRet = Check(Brr, iLength, iValue);

    if(bRet == true)
    {
        printf("%d is Present in Array!!",iValue);
    }
    else
    {
        printf("%d is not present in Array!!",iValue);
    }

    free(Brr);

    return 0;
}