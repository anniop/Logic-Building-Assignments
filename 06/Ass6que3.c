#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iTemp = 1;
    for(iCnt = 1; iCnt<=iNo;iCnt++)
    {
        iTemp = iTemp * iCnt;
    }
    return iTemp;
}

int main()
{
    
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("%d is the factorial of %d",iRet,iValue);
    return 0;
}