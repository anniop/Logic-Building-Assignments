#include<stdio.h>

int CountDiff(int iNo)
{
    int iTemp1 = 0;
    int iCnt = 0;
    int iTemp2 = 0;
    while(iNo>0)
    {
        iCnt = iNo%10;
        if(iCnt % 2 == 0) 
        {
         iTemp1+=iCnt;
        } 
        else 
        {
           iTemp2+=iCnt;
        }
        iNo/=10;
        
    }
    return iTemp1-iTemp2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter NUmber : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("Difference is  %d",iRet);

    return 0;
}