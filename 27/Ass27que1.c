#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    int i = 0;
    for(i = 0; str[i]!='\0';i++)
    {
        if(str[i] == ch)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    
    char Arr[20];
    char cValue;
    BOOL bRet = false;

    printf("Enter String : \n");
    fgets(Arr, sizeof(Arr), stdin);

    printf("Enter Character to search : \n");
    scanf("%c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == true)
    {
    printf("Character is Present\n");
    }
    else
    {
        printf("Character is not present\n");
    }

    return 0;
}