#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter A Number :");
    scanf("%d", &n);

    int mid = n / 2;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == mid - i || j == mid + i || j == i - mid || j == (3 * mid - i))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}