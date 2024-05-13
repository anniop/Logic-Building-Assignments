#include<stdio.h>

int  CountFour(int iNo)
{
    int iCnt = 0;
    while(iNo>0)
    {
        if((iNo %10) < 6)
        {
            iCnt++;
        }
        iNo /= 10;
    }
    return iCnt;
}

int main()
{
    
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet = CountFour(iValue);
    printf("%d are the number of digits less than 6\n",iRet);
    return 0;
}