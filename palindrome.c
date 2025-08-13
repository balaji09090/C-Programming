#include <stdio.h>
int main()
{
    int n, rev = 0;
    printf("Enter a Number :");
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (temp == rev)
        printf("Palindrome Number :");
    else
        printf("Not Palidrome Number :");
    return 0;
}
