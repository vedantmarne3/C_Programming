#include<stdio.h>

float AddTwoNumbers(
                        float fNo1,             //first input
                        float fNo2                   //second input
                   )
{
    float fAns = 0.0f;                              //

    fAns = fNo1 + fNo2;                             //

    return fAns;
}
int main()
{
   
    float fValue1 = 0.0f;                            //To Store First input
    float fValue2 = 0.0f;                            //To Store FSecond input
    float fResult = 0.0f;                            //To Store Result

    printf("Enter first No.: \n");              
    scanf("%f",&fValue1);                             

    printf("Enter Second No.: \n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1, fValue2);      
    
    printf("Addition is: %f\n",fResult);

    return 0;
}