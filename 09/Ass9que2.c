#include<stdio.h>

void DisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt = iStart;iCnt<=iEnd;iCnt++)
    {
        if((iCnt%2) == 0)
        {
            printf("%d \t",iCnt);
        }
    }
    if(iStart> iEnd)
    {
        printf("Invalid Range\n");
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

    DisplayEven(iValue1,iValue2);

    return 0;
}