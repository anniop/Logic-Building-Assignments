#include<stdio.h>
#include<stdlib.h>

int SumOdd(int iSize,int Arr[])
{
    int i = 0;
    int iSum = 1;

    for (i = 0; i<iSize;i++)
    {
        if ((Arr[i]%2) != 0)
        {
            iSum = iSum * Arr[i];   
        }
        
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
    iRet = SumOdd(iCount,Brr);
    printf("The Product of All Odd numbers is : %d\n",iRet);

    free(Brr);
    return 0;
}