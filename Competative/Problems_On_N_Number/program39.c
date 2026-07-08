#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0/9.0);

    return dCelsius;
   
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temprature in Fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temprature is Celsius : %lf\n",dRet);

    return 0;
}