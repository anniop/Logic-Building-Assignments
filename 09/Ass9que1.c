#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt = iStart; iCnt<=iEnd;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Start Point : ");
    scanf("%d",&iValue1);
    printf("Enter End Point : ");
    scanf("%d",&iValue2);
    RangeDisplay(iValue1,iValue2);


    return 0;
}