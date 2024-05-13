#include<stdio.h>

void DisplayOdd(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = iStart;iCnt<=iEnd;iCnt++)
    {
        if((iCnt %2) ==0)
        {
            iSum = iCnt + iSum;
        }
    }
    if(iStart>iEnd || iStart<0)
    {
        printf("Invalid Values\n");
    }
    else
    {
        printf("%d",iSum);
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

    DisplayOdd(iValue1,iValue2);


    return 0;
}