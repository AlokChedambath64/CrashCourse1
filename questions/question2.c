#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 6; i++)
    {
        // for the blanks
        for (int j=6-1; j>i; j--)
        printf(" ");

        // For the hashes
        for (int j=0; j<=i;j++)
        printf("#");
        printf("\n");
    }
}
