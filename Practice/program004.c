/*
ALGORITHM
    START
        Accept First No. as No1
        Accept Second NO. as No2
        Perform addition of No2 and No2
        Display the resutl
    STOP

*/
#include<stdio.h>

int main()
{
    //Variable creation With defualt Values...
    float i = 0.0f, j = 0.0f, k = 0.0f;

    printf("Enter first No.: \n");
    scanf("%f",&i);

    printf("Enter Second No.: \n");
    scanf("%f",&j);

    k = i + j;

    printf("Addition is: %f\n",k);

    return 0;
}
