#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define TRUE 1;
#define FALSE 0;

typedef int BOOL;

BOOL Check(int iSize,int Arr[])
{
    int i = 0;
    BOOL check = false;
    
    for (i = 0; i < iSize; i++)
    {
        if(Arr[i] == 11)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{

    
    int i =0;
    int *Brr = NULL;
    int iCount = 0;
    BOOL BRet = false;

    printf("Enter Number of Elements that you want to enter : \n");
    scanf("%d",&iCount);

    Brr = (int * )malloc(iCount * sizeof(int));

    printf("Enter The Value of Elements : \n");
    for(i = 0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }
    BRet = Check(iCount,Brr);

    if(BRet == true)
    {
        printf("11 is Present\n");
    }
    else
    {
        printf("11 is Abcent\n");
    }

    free(Brr);
    return 0;
}