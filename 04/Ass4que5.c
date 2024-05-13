#include<stdio.h>
int nonfactor(int iNo)
{
    int iCnt = 0;
    int iTemp = 0;
    int iTemp2 = 0;
    int i = 0;
    for(iCnt = 1; iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            iTemp = iCnt + iTemp;
        }
        else
        {
            iTemp2 = iCnt + iTemp2;
        }
    }
    i = iTemp2-iTemp;
   return i;
}
int main()
{
    
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet = nonfactor(iValue);
    printf("%d",iRet);
   
    return 0;
}