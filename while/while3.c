//printing numbers form 1 to n
#include <stdio.h>

int main()
{
    int n;

    printf("How many numbers: ");
    scanf("%d", &n);

    int i;

    while(i < n)
    {
        printf("%d\n");
        i++;
    }
}
