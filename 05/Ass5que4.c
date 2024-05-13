#include<stdio.h>

void Odd(int iNo)
{
    int iCnt = 0;
    for(iCnt= 1;iCnt <= iNo; iCnt++)
    {
        if((iCnt%2)!=0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{

    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    Odd(iValue);
    return 0;
}