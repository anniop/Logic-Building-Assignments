#include<stdio.h>

void DisplayReverse(int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt = iEnd; iCnt>=iStart;iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    DisplayReverse(iValue1,iValue2);

    return 0;
}