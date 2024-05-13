#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iTemp1 = 1;
    int iTemp2 =1;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2) != 0)
        {
            iTemp1 = iTemp1 * iCnt;
        }
        else
        {
            iTemp2 = iTemp2 * iCnt;
        }
         
    }
    return iTemp2-iTemp1;
   
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