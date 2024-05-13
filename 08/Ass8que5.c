#include<stdio.h>

double SquareMeter(float fMeter)
{
    double dResult = 0.0f;
    
    dResult = fMeter * 0.0929;
    return dResult; 
}

int main()
{
    
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter Value : ");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);
    printf("The Conversion is %f",dRet);

    return 0;
}