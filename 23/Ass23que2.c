#include<stdio.h>
#include<stdbool.h>
#define TRUE 1;
#define FALSE 0;
typedef int BOOL;

BOOL ChkCapital(char ch)
{
     if ((ch >= 65 && ch <= 90) )
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

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("%c is a Capital character\n",cValue);
    }
    else
    {
        printf("%c is not a Capital character\n",cValue);
    }


    return 0;
}