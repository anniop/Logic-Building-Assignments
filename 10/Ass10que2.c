#include<stdio.h>

#define TRUE 1
#define FASLE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iCnt = 0;
    while(iCnt<iNo)
    {
        iCnt = iNo%10;
        if(iCnt == 0)
        {
            return TRUE;
        }
        iNo/=10;
    }
}

int main()
{
    
    int iValue = 0;
    BOOL bRet = FASLE;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    bRet = ChkZero(iValue);
    if(bRet == TRUE)
    {
        printf("It Contains ZERO\n");
    }
    else
    {
        printf("It Does Not COnstais ZERO\n");
    }

    return 0;
}