#include<stdio.h>

int CountEven(int iNo)
{
    int iCnt = 0;
    int iTemp = 0;
    while(iNo>0)
    {
        iCnt = iNo%10;
        if(iCnt%2 ==0)
        {
            iTemp++;
        }
        iNo /=10;
    }
    return iTemp;
    
}

int main()
{
    
    int iValue = 0;
    int iRet = 0;
    printf("ENter Number : ");
    scanf("%d",&iValue);
    iRet = CountEven(iValue);
    printf("The Number of Even Numbers are %d",iRet);

    return 0;
}