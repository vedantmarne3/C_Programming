#include<stdio.h>

void DispalySchedule(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Your Exam at 7am\n");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("Your Exam at 8:30am\n");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("Your exam at 9:20am\n");
    }
    else if(ch == 'D'|| ch == 'd')
    {
        printf("Your exam at 10.30am\n");
    }
    else
    {
        printf("Enter Correct Division!!");
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter your Division : \n");
    scanf("%c",&cValue);


    DispalySchedule(cValue);

    return 0;
}