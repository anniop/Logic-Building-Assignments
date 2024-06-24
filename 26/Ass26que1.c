#include<stdio.h>

void strlwrx(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if(str[i]>='A' || str[i]<='Z')
        {
            str[i] = str[i] + (97 - 65);
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