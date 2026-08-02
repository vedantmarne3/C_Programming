#include<stdio.h>

int Add(int A, int B)
{
    return A + B;
}
int main()
{
    int n = 0;
    int x = 0;
    
    int sum = 0;

    printf("Enter how many number you want to Add : \n");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++)
    {
        printf("Enter %d Number :",i);
        scanf("%d",&x);
        sum = Add(sum, x);
    }


    printf("Addition is : %d",sum);


    return 0;
}