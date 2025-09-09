#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter two numbers :");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("Addition of A&B is %d\n", c);
    c = a - b;
    printf("Subtraction of A&B is %d\n", c);
    c = a * b;
    printf("Multiplication of A&B is %d\n", c);
    c = a / b;
    printf("Division of A&B is %d\n", c);
    return 0;
}
