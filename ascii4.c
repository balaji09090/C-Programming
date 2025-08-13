#include<ctype.h>
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Anything:");
    scanf("%c", &ch);
    if (isupper(ch))
        printf("Upper Case");

    else if (islower(ch))
        printf("Lower Case");

    else if (isdigit(ch))
    printf("Digit");

    else printf("Special Symbol");
    return 0;
}