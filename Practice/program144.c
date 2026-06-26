#include<stdio.h>

void update(int Arr[], int iSize) // Call by address
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        Arr[iCnt]++;
    }

}
int main()
{
    int Brr[] = {10,20,30,40,50};
    int iCnt = 0;

    printf("Array Element before function call : \n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Brr[iCnt]);
    }

    update(Brr,5);

    printf("Array Element After function call : \n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Brr[iCnt]);
    }

    return 0;
}