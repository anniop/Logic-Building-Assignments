#include<stdio.h>

int MulDigits(int iNo)
{
    int iTemp = 1;
    int iCnt = 0;
    while(iNo>0)
    {
        iCnt = iNo%10;
        iTemp = iTemp *iCnt;
        iNo = iNo/10;
        iNo /=10;
    }
    return iTemp;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter NUmber : ");
    scanf("%d",&iValue);

    iRet = MulDigits(iValue);
    printf("Multiplication is %d",iRet);

    return 0;
}