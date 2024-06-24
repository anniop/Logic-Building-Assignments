#include<stdio.h>
#include<stdlib.h>

void Range(int iSize,int Arr[], int iStart, int iEnd)
{
    int i = 0;
    printf("The Elements in the range are : \n");
    for (i = 0; i<iSize;i++)
    {
        if (Arr[i]<iEnd && Arr[i]>iStart)
        {
            printf("%d\n",Arr[i]);
        }
        
    }
    
}

int main()
{

    
    int i =0;
    int *Brr = NULL;
    int iCount = 0;
    
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of Elements that you want to enter : \n");
    scanf("%d",&iCount);

    printf("Enter Start Point\n");
    scanf("%d",&iValue1);
    
    printf("Enter End Point\n");
    scanf("%d",&iValue2);

    Brr = (int * )malloc(iCount * sizeof(int));

    printf("Enter The Value of Elements : \n");
    for(i = 0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }
    Range(iCount,Brr,iValue1,iValue2);

    free(Brr);
    return 0;
}