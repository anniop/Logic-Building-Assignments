#include<stdio.h>
#include<stdlib.h>

int Frequency(int iSize,int Arr[])
{
    int i = 0;
    int iCount = 0;
    
    for (i = 0; i < iSize; i++)
    {
        if(Arr[i] == 11)
        {
            iCount++;
        }
        
    }
    return iCount;   
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
    iRet = Frequency(iCount,Brr);

    printf("The Number of Even Numbers are : %d",iRet);

    free(Brr);
    return 0;
}