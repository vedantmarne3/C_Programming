#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double Area = 0.0;

    Area = PI * fRadius * fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %lf \n",dRet);

    return 0;
}