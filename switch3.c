#include <stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter Expression :");
    scanf("%d  %c  %d", &a,&op, &b);

    switch (op)
    {
    case '+':
        printf("%d  %c %d  = %d", a, op, b, (a + b));
        break;
    case '-':
        printf("%d  %c %d = %d", a, op, b, (a - b));
        break;
    case '*':
        printf("%d  %c %d = %d", a, op, b, (a * b));
        break;
    case '/':
        printf("%d  %c %d = %d", a, op, b, (a / b));
        break;
    }
    return 0;
}