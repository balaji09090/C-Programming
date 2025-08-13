#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a Number");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2)
        printf("%d\n", i);
}