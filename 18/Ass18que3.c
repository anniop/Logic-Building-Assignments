#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
   for (int i = 0; i < iRow; i++) 
   {
        for (int j = 0; j < iCol; j++) 
        {
            if (j == iCol - i - 1 && (i==1 || j==iCol || i == iRow || j == 1)) 
            {
                printf("#\t");
            } 
            else 
            {
                printf("*\t");
            }
        }

        printf("\n");
    }
}

int main()
{
    
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter Number of Rows \n");
    scanf("%d",&iValue1);
    printf("Enter Number of Columns\n");
    scanf("%d",&iValue2);
    pattern(iValue1,iValue2);

    return 0;
}