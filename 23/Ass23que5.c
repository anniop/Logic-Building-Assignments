#include<stdio.h>


void ChkCapital(char ch)
{
    if ((ch == 65 || ch == 97) )
    {
        printf("Your Exam is at 7:00 AM\n");
    }
    else if((ch == 66 || ch == 98))
    {
        printf("Your Exam is at 8:30 AM\n");
    }
    else if((ch == 67 || ch == 99))
    {
        printf("Your Exam is at 9:20 AM\n");
    }
    else if((ch == 68 || ch == 100))
    {
        printf("Your Exam is at 10:30 AM\n");
    }
    else
    {
        printf("Invalid CHoice\n");
    }
}


int main()
{

    char cValue = '\0';
    
    printf("Enter Division : \n");
    scanf("%c",&cValue);

    ChkCapital(cValue);

    return 0;
}