#include <stdio.h>
int main()
{
    int x, y, ch, n;
    printf("Enter Two Number: ");
    scanf("%d%d", &x, &y);
    printf("\n1.Equality \n2.Less Than \n3.Quotient and Remainder \n4.Range \n5.Swap \n");
    printf("Enter The Choice:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        if (x == y)
            printf("X is Equal to Y\n");
        else
            printf("X is not Equal to Y\n");
        break;
    case 2:
        if (x < y)
            printf("X is Less Than Y\n");
        else
            printf("X is Not Equal to Y\n");
        break;
    case 3:
        if (y != 0)
            printf("Quotient =%d ,Remainder=%d\n", x / y, x % y);
        else
            printf("Divison by zero not possible.\n");
        break;
    case 4:
        printf("Range is :%d", (n >= x && n <= y));
        break;
    case 5:
        printf("Swap is :%d", x = y, y = x);
    }
    return 0;
}