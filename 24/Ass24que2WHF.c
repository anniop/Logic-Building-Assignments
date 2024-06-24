#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'a' && ch <= 'z'))
    {
        printf("The Coresponding Capital letter will be : %c\n",ch - ('a' - 'A'));
    }
    else if((ch >= 'A' && ch <= 'Z'))
    {
        printf("The Coresponding Small letter will be : %c\n",ch + ('a' - 'A'));
    }
    else
    {
        printf("Invalid Choice\n");
    }

}

int main()
{
    
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);
    Display(cValue);

    return 0;
}