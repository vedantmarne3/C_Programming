#include<stdio.h>

void fun(int n)
{
    if(n <= 0)
        return;


    printf("%d ", n);

    fun(n - 1);

    printf("%d ", n);

    fun(n - 2);

    printf("%d ", n);

    fun(n - 1);

    printf("%d ", n);
    
}

int main()
{
    fun(3);

    return 0;
}