#include<stdio.h> 

int Summation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int iLenght = 4;
    int iCnt = 0;
    int iRet = 0;

    int Brr[iLenght];

    printf("Enter the Element : \n");

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    
    iRet = Summation(Brr,iLenght);

    printf("Addition of All Elements : %d",iRet);



    return 0;
}