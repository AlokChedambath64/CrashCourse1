//sum of first N natural numbers
#include <stdio.h>

int main()
{
    int N, i = 0, sum = 0;
    printf("Till how many numbers: ");
    scanf("%d", &N);

    while (i < N)
    {
        sum = sum + i;
        i++;
    }
    printf("%d\n", sum);
}
