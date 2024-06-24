#include<stdio.h>
#include<ctype.h>

void Display(char ch)
{
    if(islower(ch))
    {
        printf("The Coresponding Capital letter will be : %c\n",toupper(ch));
    }
    else if(isupper(ch))
    {
        printf("The Coresponding Small letter will be : %c\n",tolower(ch));
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