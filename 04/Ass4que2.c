#include<stdio.h>

int Decrease(int iNo)
{
    int iCnt = 0;
    int iTemp=1;
    for(iCnt = iNo; iCnt>=1;iCnt--)
    {
        if(iNo%iCnt == 0)
        {
           printf("%d\n",iCnt);
        }
    }
    
}

int main()
{
    
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    Decrease(iValue);
    return 0;
}