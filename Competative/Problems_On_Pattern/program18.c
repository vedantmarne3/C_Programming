/*
    Input : iRow = 4,  iCol = 4

    Output :  A   B   C   D
              a   d   c   d 
              A   B   C   D
              a   d   c   d

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0', ch1 = '\0';


    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,ch = 'A',ch1 = 'a'; j <= iCol; j++,ch++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",ch1);
                ch1++;
            }
            else
            {
                printf("%c\t",ch);
            }
        }
        printf("\n");
    }


}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);


    return 0;
}