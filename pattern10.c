#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter A Number :");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (k = i; k < n; k++)
            printf(" ");
        for (j = 1; j < i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}