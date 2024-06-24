#include<stdio.h>

int Count(char *str, char ch)
{
    int i = 0;
    int LastIndex = -1;
    for(i = 0; str[i]!='\0';i++)
    {
        if(str[i] == ch)
        {
            LastIndex = i;
        }
    }
    return LastIndex;
}

int main()
{
    
    char Arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String : \n");
    fgets(Arr, sizeof(Arr), stdin);

    printf("Enter Character to search : \n");
    scanf("%c",&cValue);

    iRet = Count(Arr,cValue);

    printf("THe Value is : %d",iRet);

    return 0;
}
