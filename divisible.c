#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if ((n % 5 == 0) && (n % 7 == 0)) {
        printf("%d is divisible by both 5 and 7.\n", n);
    } else if (n % 5 == 0) {
        printf("%d is divisible by 5 but not by 7.\n", n);
    } else if (n % 7 == 0) {
        printf("%d is divisible by 7 but not by 5.\n", n);
    } else {
        printf("%d is not divisible by 5 or 7.\n", n);
    }

    return 0;
}