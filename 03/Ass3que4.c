#include<stdio.h>
#include<ctype.h>

void CheckCase(char Cvalue)
{
    if(islower(Cvalue))
    {
        printf("%c",toupper(Cvalue));
    }
    else if(isupper(Cvalue))
    {
        printf("%c",tolower(Cvalue));
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter Character : ");
    scanf("%c", &cValue);
    CheckCase(cValue);

    return 0;
}