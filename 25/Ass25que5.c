#include<stdio.h>

void Reverse(char *str)
{
   int iStart = 0;
   int iEnd = 0;

   while(iStart < iEnd)
   {
    char temp = str[iStart];
    str[iStart] = str[iEnd];
    str[iEnd] = temp;
    iStart++;
    iEnd--;
   }
}   

int main()
{
    
    char Arr[20];
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);
    Reverse(Arr);

    printf("Reversed String is : %s\n",Arr);
    return 0;
}