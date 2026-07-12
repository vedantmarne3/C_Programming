#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;    
  
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *Brr = NULL;
    
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

    iRet = FirstOcc(Brr, iLength, iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurrence is %d",iRet);
    }


    free(Brr);

    return 0;
}