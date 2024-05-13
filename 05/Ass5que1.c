#include<stdio.h>

void pattern(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    pattern(iValue);
    return 0;
}