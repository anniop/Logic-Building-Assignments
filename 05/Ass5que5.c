#include<stdio.h>

void Multiple(int iNo)
{
    int iCnt = 0;
    int iTemp = 0;
    for(iCnt = 1;iCnt<=5; iCnt++)
    {
        iTemp = iNo * iCnt;
        printf("%d\n",iTemp);    
    }
     
}

int main()
{
    
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    Multiple(iValue);

    return 0;
}