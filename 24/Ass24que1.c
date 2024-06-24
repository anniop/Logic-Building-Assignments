#include <stdio.h>

void DisplayASCII()
{
    int i = 0;
    printf("%-10s %-10s %-10s %-10s\n", "Symbol", "Decimal", "Hexadecimal", "Octal");
    printf("------------------------------------------------------\n");

    for (i = 0; i <= 255; i++) 
    {
        if (i >= 32 && i <= 126)
        { 
            printf("%-10c %-10d %-10x %-10o\n", i, i, i, i);
        } else 
        { 
            printf("%-10s %-10d %-10x %-10o\n", " ", i, i, i);
        }
    }
}

int main() {
   
   DisplayASCII();

    return 0;
}
