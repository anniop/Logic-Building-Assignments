#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    int k = 1;
    for(i = 1;i<=iRow;i++)
    {
        for(j = 1;j<=iCol;j++)
        {
            if(k<=9)
            {
                printf("%d\t",k++);
            }
        }
        
        printf("\n");

    }
}

int main()
{
    
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter Number of Row : ");
    scanf("%d",&iValue1);
    printf("Enter Number of Columns : ");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);

    return 0;
}