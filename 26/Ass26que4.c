#include<stdio.h>

int strlwrx(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if(str[i]>=0 || str[i]<=9)
        {
            return str[i];
        }
        i++;
    }
    
}

int main()
{
    
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",&Arr);
    iRet = strlwrx(Arr);

    printf("The Modified String is : %d",iRet);

    return 0;
}