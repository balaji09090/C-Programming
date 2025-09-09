#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the Character :");
    scanf("%c", &ch);
    printf("The previous character is %c", ch - 1);
    printf("The Next Character is %c\n", ch + 1);
    return 0;
}