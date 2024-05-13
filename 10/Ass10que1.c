#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iCnt <= iNo)
    {
        iCnt =  iNo%10;
        printf("%d\n",iCnt);
        iNo = iNo/10;
        iCnt++;
        
    }
}

int main()
{
    
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    DisplayDigits(iValue);

    return 0;
}