#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    for(i = 1;i<=iCol;i++)
    {
        for(j = 1;j<=iRow;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter Number Rows : ");
    scanf("%d",&iValue1);
    printf("Enter Number of Columns : ");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);

    return 0;
}