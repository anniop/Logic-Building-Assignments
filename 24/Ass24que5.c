#include<stdio.h>

void Display(char ch)
{
    printf("The ASCII value of '%c' in decimal is: %d\n", ch, ch);
    printf("The ASCII value of '%c' in octal is: %o\n", ch, ch);
    printf("The ASCII value of '%c' in hexadecimal is: %x\n", ch, ch);
}

int main()
{
    
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);
    Display(cValue);

    return 0;
}