#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Anything :");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
        printf("Upper Case");

    else if (ch >= 97 && ch <= 122)
        printf("Lower Case");

    else if (ch >= 48 && ch <= 57)

        printf("Digit");

    else
        printf("Special Symbol");
    return 0;
}