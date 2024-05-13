#include<stdio.h>
#include<stdbool.h>

bool CHkVowel(char ch)
{
    if(ch =='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    
    char c = '\0';
    bool bRet = false;
    printf("Enter Character : ");
    scanf("%c",&c);
    bRet = CHkVowel(c);
    if(bRet == true)
    {
        printf("%c is a vowel\n",c);
    }
    else
    {
        printf("%c is a consanant\n",c);
    }

    return 0;
}