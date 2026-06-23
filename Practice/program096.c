#include<stdio.h> 
#include<stdlib.h> 

int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}


int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    //Step 1 : Accept the Number of Elements
    printf("Enter Number of element : \n");
    scanf("%d",&iLength);

    //Step 2 : Allocate the Memory
    Brr =(int *)malloc(iLength * sizeof(int));

    //Step 3 : Accept the Value from user
    printf("Enter the Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    //step 4 : Use the memory 
    iRet = Summation(Brr, iLength);

    printf("Addition is : %d\n",iRet);


    //step 5 : Deallocate the memory
    free(Brr);

    return 0;
}