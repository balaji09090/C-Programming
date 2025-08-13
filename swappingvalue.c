#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    c = b;
    b = c;
    a = c;
    printf("\nAfter Swapping\n a=%d\n,b=%d\n", a, b);
    return 0;
}