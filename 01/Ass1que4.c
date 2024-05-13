#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0
typedef int BOOL;
bool Check(int iNo)
{
    if((iNo %5)==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int iValue = 0;
    BOOL iRet = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue);
    iRet = Check(iValue);
    if(iRet == 1)
    {
        printf("%d is divisible by 5", iValue);
    }
    else
    {
        printf("%d is not divisible by 5", iValue);
    }

    return 0;
}