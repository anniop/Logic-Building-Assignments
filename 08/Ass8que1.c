#include<stdio.h>
#define PI 3.14


double CircleArea(float fRadius)
{
    float Area = 0.0f;
    Area = PI * fRadius * fRadius;
    return Area;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;
    printf("Enter the radius of the circle : ");
    scanf("%f",&fValue);
    dRet = CircleArea(fValue);
    printf("%f is the area of the circle \n",dRet);


    return 0;
}