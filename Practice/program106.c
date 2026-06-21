#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Time complexity O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
            break;
        }
    }

    if(iCount == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}


int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0;

    bool bRet = false;

    printf("Enter the Number of Array : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the Element : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("Enter the Element that you want to Search : \n");
    scanf("%d",&iValue);

    bRet = LinearSearch(Brr, iLength, iValue);

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