#include<stdio.h>

int CountCapital(char *str)
{
    int i = 0;
    int iCount1 = 0;
    int iCount2 = 0;

   while(str[i] != '\0') 
   {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            iCount1++;
        }
        else
        {
            iCount2++;
        }
        i++;
    }

   return iCount1-iCount2;     
}   

int main()
{
    
    char Arr[20];
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);
    iRet = CountCapital(Arr);

    printf("Difference Between Capital & Small Characters is %d\n",iRet);

    return 0;
}