#include<stdio.h>

void DisplayAddition(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
   
    
    for(iCnt = iStart;iCnt<=iEnd;iCnt++)
    {   
         
        iSum = iSum+iCnt;
            
    }
       if(iStart<0 || iStart>iEnd)
    {
        printf("Invalid Range\n");
    }
    else
    {
    printf("%d\t",iSum);
    }
    
    
}

int main()
{
    
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    DisplayAddition(iValue1,iValue2);

    return 0;
}