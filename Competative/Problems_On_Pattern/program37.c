/*
    input : iRow = 5   iCol = 5
    
    Output :   *    *   *   *   *
                  *   *   *   *
                    *   *   * 
                      *   *
                        *
    

*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;


    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= 2*i - 1; j++)
        {
           printf(" ");

        }
        for(j = 1; j <= iCol - i; j++)
        {
           printf("*");

        }
        printf("\n");
    }


}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter no. of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter no. of Colmns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}