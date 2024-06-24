#include<stdio.h>
#include<stdbool.h>
#define TRUE 1;
#define FALSE 0;
typedef int BOOL;

BOOL ChkAlpha(int iNo)
{
     if(iNo<=9)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{

    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = ChkAlpha(iValue);

    if(bRet == true)
    {
        printf("%d is a digit\n",iValue);
    }
    else
    {
        printf("%d is not a digit\n",iValue);
    }


    return 0;
}