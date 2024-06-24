#include<stdio.h>

void strlwrx(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if(str[i]>='a' || str[i]<='z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
    
}

int main()
{
    
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n]s",&Arr);
    strlwrx(Arr);

    printf("The Modified String is : %s",Arr);

    return 0;
}