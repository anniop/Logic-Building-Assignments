#include<stdio.h>
#include<stdlib.h>

void Difference(int iSize,int Arr[])
{
    int i = 0;
    int iMin = Arr[0];
    
    for(i = 0;i<iSize;i++)
    {
        if ((Arr[i]%5) == 0 && (Arr[i]%3) == 0)
        {
            printf("%d is divisible by 5 and divisible by 3 also \n", Arr[i]);
        }
        else
        {
            printf("%d is Not divisible by 5 and not divisible by 3\n", Arr[i]);
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