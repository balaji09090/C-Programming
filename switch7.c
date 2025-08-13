#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter the Character :");
    scanf(" %c", &ch);

    switch (ch = tolower(ch))
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowels");
        break;
    default:
        printf("Consonants");
        break;
    }
    return 0;
}