#include<stdio.h>
#include<stdlib.h>

int Difference(int iSize,int Arr[])
{
    int i = 0;
    int iMin = Arr[0];
    int Even = 0;
    int Odd = 0;
    for(i = 0;i<iSize;i++)
    {
        if (iMin%2 == 0)
        {
            Even == iMin;
        }
        else
        {
            Odd == iMin;
        }
        
    }
    return Even - Odd;
    
    
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

    printf("The Difference is : %d",iRet);

    free(Brr);
    return 0;
}