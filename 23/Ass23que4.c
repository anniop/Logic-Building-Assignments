#include<stdio.h>
#include<stdbool.h>
#define TRUE 1;
#define FALSE 0;
typedef int BOOL;

BOOL ChkSmall(char ch)
{
     if ((ch >= 91 && ch <= 122) )
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

    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("%c is a Small character\n",cValue);
    }
    else
    {
        printf("%c is not a Small character\n",cValue);
    }


    return 0;
}