#include<stdio.h>
#include<stdlib.h>

int CountEvne(int iSize,int Arr[])
{
    int i = 0;
    int iCnt = 0;
    for (i = 0; i < iSize; i++)
    {
        if((Arr[i]%2) == 0)
        {
            iCnt++;
        }
    }
    return iCnt;   
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
    iRet = CountEvne(iCount,Brr);

    printf("The Number of Even Numbers are : %d",iRet);

    free(Brr);
    return 0;
}