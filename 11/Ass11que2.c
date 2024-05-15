#include<stdio.h>

int CountOdd(int iNo)
{
    int iTemp = 0;
    int iCnt = 0;
    while(iNo>0)
    {
        iCnt = iNo%10;
        if((iCnt%2) != 0)
        {
            iTemp++;
        }
        iNo /=10;
    }
    return iTemp;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("THe NUmber of Odd Digits are %d",iRet);

    return 0;
}