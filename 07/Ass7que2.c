#include<stdio.h>

int DollartoINR(int iNo)
{
    int INR = iNo * 70;
    return INR;
}

int main()
{
    
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);
    iRet = DollartoINR(iValue);
    printf("%d",iRet);

    return 0;
}