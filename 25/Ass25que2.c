#include<stdio.h>

int CountSmall(char *str)
{
    int i = 0;
    int count = 0;

   while(str[i] != '\0') 
   {
        if (str[i] >= 'a' && str[i] <= 'z') 
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
    iRet = CountSmall(Arr);

    printf("Small Character are %d\n",iRet);

    return 0;
}