#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i =0;
    int j =0;
    char ch = 'A';
    for(i = 1;i<=iRow;i++)
    {
        for(j = 1; j<=iCol;j++,ch++)
        {
            printf("%c\t",ch);
        }
        ch = 'A';
        printf("\n");
    }
}

int main()
{
    
    int iValue1 = 0;
    int iValue2 = 0;

    printf("ENter Row : ");
    scanf("%d",&iValue1);

    printf("Enter COlumns : ");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);

    return 0;
}