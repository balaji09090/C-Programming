#include <stdio.h>
int main()
{
    int a = 0, b = 1, c, n, i;
    printf("Enter A Number :");
    scanf("%d", &n);
    if (n == 1)
        printf("%d", a);
    else if (n >= 2)
    {
        printf("%d\n%d", a, b);
        for (i = 2; i < n; i++)
        {
            c = a + b;
            printf("\n%d", c);
            a = b;
            b = c;
        }
    }
    return 0;
}