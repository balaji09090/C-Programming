#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter A Number :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("\n%d x %d = %d", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}