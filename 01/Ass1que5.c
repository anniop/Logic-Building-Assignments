#include<stdio.h>

void Star(int iNo)
{
    int iCnt = 0;
    for(iCnt =1 ; iCnt<= iNo; iCnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int iValue =0;
    printf("Enter : ");
    scanf("%d", &iValue);
    Star(iValue);

    return 0;
}