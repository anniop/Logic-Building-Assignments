#include<stdio.h>
#include<stdlib.h>

void Difference(int iSize,int Arr[])
{
    int i = 0;
    int iMin = Arr[0];
    
    for(i = 0;i<iSize;i++)
    {
        if ((Arr[i]%11) == 0 )
        {
            printf("%d is divisible by 11 \n", Arr[i]);
        }
        else
        {
            printf("%d is Not divisible by 11 \n", Arr[i]);
        }
        
        
    }
    
    
}

int main()
{

    
    int i =0;
    int *Brr = NULL;
    int iCount = 0;

    printf("Enter Number of Elements that you want to enter : \n");
    scanf("%d",&iCount);

    Brr = (int * )malloc(iCount * sizeof(int));

    printf("Enter The Value of Elements : \n");
    for(i = 0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }
    Difference(iCount,Brr);

    free(Brr);
    return 0;
}