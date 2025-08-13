#include <stdio.h>
int main()
{
    int a, b, ch;
    printf("Enter Two Number: ");
    scanf("%d%d", &a, &b);
    printf("\n1.Addition \n2.Substraction \n3.Multiplication \n4.Division\n");
    printf("Enter The Choice:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Addition is :%d", (a + b));
        break;
    case 2:
        printf("Substraction is :%d", (a - b));
        break;
    case 3:
        printf("MUltiplication is :%d", (a * b));
        break;
    case 4:
        printf("Division is :%d", (a / b));
        break;
    }
    return 0;
}