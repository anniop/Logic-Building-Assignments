#include<stdio.h>
#include<stdlib.h>

void Digits(int iSize,int Arr[])
{
    int i = 0;

    for (i = 0; i<iSize;i++)
    {
       if (Arr[i]>=100 && Arr[i]<=999)
       {
            printf("the three digit Numbers are %d\n",Arr[i]);
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
    Digits(iCount,Brr);

    free(Brr);
    return 0;
}