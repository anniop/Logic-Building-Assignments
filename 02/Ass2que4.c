#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<=iFrequency; iCnt++)
    {
            printf("%d\n",iNo);
    }
}
int main()
{
    
    int iValue =0;
    int iFreq = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    printf("Enter frequency\n");
    scanf("%d", &iFreq);
    Display(iValue,iFreq);

    return 0;
}