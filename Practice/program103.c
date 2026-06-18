#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool LinearSearch(int Arr[], int iSize)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
           bFlag = true;
           break;       // 11 match zalya zalya break karta
           
        }
    }

    return bFlag;
}


int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    bool bRet = false;

    printf("Enter the Number of Array : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the Element : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    bRet = LinearSearch(Brr, iLength);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    free(Brr);

    return 0;
}