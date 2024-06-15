#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int odd = 1;
    int even = 2;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if((i%2)==0 )
            {
                printf("%d\t",even);
                even+=2;
            }
            else if((i%2)!=0 )
            {
                printf("%d\t",odd);
                odd+=2;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter Number of Rows : ");
    scanf("%d",&iValue1);
    printf("Enter Number of Columns : ");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);

    return 0;
}