#include<stdio.h>

void Display(char ch)
{
    int i = 0;
    for(i = 0; i<=0;i++)
    {
    if((ch >= 33 && ch <= 47 || ch == 64))
    {
        printf("TRUE\n");    
    }
    else 
    {
        printf("FALSE\n");
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