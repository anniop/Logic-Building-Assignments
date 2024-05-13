#include<stdio.h>

void pattern(int iNo)
{
    
    int iCnt = 0;
    for(iCnt = (-iNo); iCnt<=0;iCnt++)
    {
        printf("%d\n",iCnt);
    }
    for(iCnt = 0; iCnt<= iNo; iCnt++)
    {
        
        printf("%d\n",iCnt);
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