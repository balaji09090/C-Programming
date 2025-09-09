#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter A Number :");
    scanf("%d", &n);
    for (i = n; i > 1; i--)
    {
        for (j = n; j >= 1; j--)
        {
            if (j > i)
                printf("%d", j);
            else
                printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}