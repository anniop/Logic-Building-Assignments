#include<stdio.h>

int CountSpace(char *str)
{
    int i = 0;
    int iCount = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            iCount++;
        }      
    }
    return iCount;
}

int main()
{
    
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",&Arr);
    iRet = CountSpace(Arr);

    printf("The White Spaces Are : %d",iRet);

    return 0;
}