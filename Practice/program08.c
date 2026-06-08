////////////////////////////////////////////////////
//
// Include Required Header Files
//
/////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : AddTwoNumbers
//  Input :         float, float
//  Output :        float
//  Description :   performs Addtion of 2 floats
//  Date :          08/05/2026
//  Author :        Vedant Baburao Marne
//
////////////////////////////////////////////////////

float AddTwoNumbers(
                        float fNo1,                  //first input
                        float fNo2                   //second input
                   )
{
    float fAns = 0.0f;                              //Variable to store result

    fAns = fNo1 + fNo2;                             //perform the Addition

    return fAns;
}
////////////////////////////////////////////////////
//
// Application to perform Addition of
//
/////////////////////////////////////////////////////
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
//////////////////////////////////////////////////////
//
//  Input : 10.0    11.0
//  Output : 21.0
//
//////////////////////////////////////////////////////