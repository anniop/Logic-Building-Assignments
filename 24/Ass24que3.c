#include<stdio.h>

void Display(char ch)
{
    int i = 0;
    for(i = 0; i<=26;i++)
    {
    if((ch >= 'a' && ch <= 'z'))
    {
        ch++;
        printf("%c\n",ch);    
    }
    else if((ch >= 'A' && ch <= 'Z'))
    {
        ch++;
        printf("%c\n",ch++);
    }
    
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