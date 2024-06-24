#include<stdio.h>
#include<stdlib.h>

int SumDigits(int iSize,int Arr[])
{
    int i = 0;
    int iSum = 0;

    for (i = 0; i<iSize;i++)
    {
        iSum += Arr[i] % 10;
        Arr[i] /= 10;
    }
    
    return iSum;
}

int main()
{

    
    int i =0;
    int *Brr = NULL;
    int iCount = 0;
    int iRet = 0;

    printf("Enter Number of Elements that you want to enter : \n");
    scanf("%d",&iCount);

   
    Brr = (int * )malloc(iCount * sizeof(int));

    printf("Enter The Value of Elements : \n");
    for(i = 0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }
   for (int i = 0; i < iCount; i++)
    {
        printf("The sum of the digits of %d is %d\n", Brr[i], SumDigits(iCount,Brr));
    }

    free(Brr);
    return 0;
}