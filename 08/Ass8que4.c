#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dTemp = 0;
    dTemp = fTemp-32.0 * (5.0/9.0);
    return dTemp;
}

int main()
{
    
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter Temperature in Fahrenheit : \n");
    scanf("%f",&fValue);
    
    dRet = FhtoCs(fValue);
    printf("The Temperature is : %f",dRet);

    return 0;
}