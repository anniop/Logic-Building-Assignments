#include<stdio.h>

void Star(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        printf("*\n");
        iNo--;
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