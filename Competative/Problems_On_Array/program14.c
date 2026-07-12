#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int Start, int End)
{
    int iCnt = 0;
    
    printf("Elements Between %d to %d : ",Start,End);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] >= Start) && (Arr[iCnt] <= End))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
        
    
}

int main()
{
    int iLength = 0, iCnt = 0, iValue1 = 0, iValue2 = 0, iRet = 0;
    int *Brr = NULL;
    
    printf("Enter no of element : \n");
    scanf("%d",&iLength);

    printf("Enter Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point : \n");
    scanf("%d",&iValue2);

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

    Range(Brr, iLength, iValue1, iValue2);


    free(Brr);

    return 0;
}