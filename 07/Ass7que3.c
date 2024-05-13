#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iTemp = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2) == 0)
        {
            iTemp = iTemp * iCnt;
        }
         
    }
    return iTemp;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("The Factorial of even Numbers will be : %d",iRet);

    return 0;
}