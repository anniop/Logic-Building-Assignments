#include<stdio.h>
#include<stdlib.h>

int Small(int iSize,int Arr[])
{
    int i = 0;
    int iSmall = 0;
    
    for (i = 0; i<iSize;i++)
    {
        if (Arr[i] < iSmall)
        {
            iSmall = Arr[i];
        }
        
    }
    return iSmall;
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
    iRet = Small(iCount,Brr);
    printf("The Smallest number is : %d\n",iRet);

    free(Brr);
    return 0;
}