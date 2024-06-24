#include<stdio.h>

void strlwrx(char *str)
{
    int i = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + ('a' - 'A');
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
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