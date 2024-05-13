#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0;
    dArea = fWidth * fHeight;
    return dArea;
}

int main()
{
    
    float fValue = 0.0f, fValue2 = 0.0f ;
    double dRet = 0.0f;
    
    printf("Enter Width of the Rectangle : \n");
    scanf("%f",&fValue);
    printf("Enter the height of the Rectangle : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue,fValue2);
    printf("%f is the area of the Circle \n",dRet);
    


    return 0;
}