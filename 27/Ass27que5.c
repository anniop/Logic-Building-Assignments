#include<stdio.h>
#include<string.h>

void StrRevx(char *str)
{
    int iLength = strlen(str);
    int i = 0;
    int iStart = 0;
    int iEnd = iLength - 1;
    char cTemp = '\0';

    while(iStart<iEnd)
    {
        cTemp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = cTemp;
        iStart++;
        iEnd--;
    }
}

int main()
{
    
    char Arr[20];

    printf("Enter String : \n");
    fgets(Arr, sizeof(Arr), stdin);

    StrRevx(Arr);

    printf("The Modified String is :%s",Arr);

    return 0;
}