#include<stdio.h>
#include<stdlib.h>

int Difference(int iSize,int Arr[])
{
    int i = 0;
    int iLarge = 0;
    int iSmall = 0;
    iSmall = Arr[i];
    for (i = 0; i<iSize;i++)
    {
        if (Arr[i] < iSmall)
        {
            iSmall = Arr[i];
        }
        else if(Arr[i] > iLarge)
        {
            iLarge = Arr[i];
        }
        
    }
    return iLarge - iSmall;
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
    iRet = Difference(iCount,Brr);
    printf("The Difference between smallest and largest number is : %d\n",iRet);

    free(Brr);
    return 0;
}