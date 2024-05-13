#include<stdio.h>

void Checkeven(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("%d is a even number\n");
    }
    else
    {
        printf("%d is a odd number\n");
    }
}

int main()
{
    
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    Checkeven(iValue);

    return 0;
}