#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter A Number :");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == n || j == 1)
                printf("#");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}