#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int iSize,int Arr[], int iNo)
{
    int i = 0;
    int index = -1;
    for (i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            index = i;
            break;
        }
        
    }
    return index;
    
}

int main()
{

    
    int i =0;
    int *Brr = NULL;
    int iCount = 0;
    int iRet = 0;
    int No = 0;

    printf("Enter Number of Elements that you want to enter : \n");
    scanf("%d",&iCount);

    printf("Enter No\n");
    scanf("%d",&No);

    Brr = (int * )malloc(iCount * sizeof(int));

    printf("Enter The Value of Elements : \n");
    for(i = 0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }
    iRet = FirstOcc(iCount,Brr,No);

    printf("The First occurence is  : %d",iRet);

    free(Brr);
    return 0;
}