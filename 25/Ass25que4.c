#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;

BOOL CountCapital(char *str)
{
    int i = 0;
    

   while(str[i] != '\0') 
   {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
        {
            return true;
        }
        else
        {
            return false;
        }
        i++;
    }
    
}   

int main()
{
    
    char Arr[20];
    bool bRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);
    bRet = CountCapital(Arr);

    if(bRet == true)
    {
        printf("The String Contains Vowels\n");
    }
    else
    {
        printf("The String Do Not Contains Vowels\n");
    }

    return 0;
}