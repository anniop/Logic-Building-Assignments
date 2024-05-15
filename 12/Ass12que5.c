#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iTemp = 1;
    for(iCnt = 1; iCnt<=iNo;iCnt++)
    {       
            iTemp = iCnt*2;
            printf("%d\n",iTemp);
    }
}

int main()
{
    
    int iValue =0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;
}