#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Anything :");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'B' )
        printf("Upper Case");

    else if (ch >= 'a' && ch <= 'b')
        printf("Lower Case");

    else if (ch >= '0' && ch <= '9')
    printf("Digit");

    else printf("Special Symbol");
    return 0;
}