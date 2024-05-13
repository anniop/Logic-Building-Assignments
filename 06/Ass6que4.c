#include<stdio.h>

int Table(int iNo)
{
    int iCnt = 0;
    int iTemp = 1;
    for(iCnt =1;iCnt<=10;iCnt++)
    {
        iTemp = iCnt * iNo;
        printf("%d\n",iTemp);
    }
}

int main()
{
    
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = Table(iValue);

    return 0;
}