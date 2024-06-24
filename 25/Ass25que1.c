#include<stdio.h>

int CountCapital(char *str)
{
    int i = 0;
    int count = 0;

   while(str[i] != '\0') 
   {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            count++;
        }
        i++;
    }

   return count;     
}   

int main()
{
    
    char Arr[20];
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);
    iRet = CountCapital(Arr);

    printf("Capital Character are %d\n",iRet);

    return 0;
}