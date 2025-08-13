#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Anything :");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A'...'Z' :printf("Capital Letter");
        break;
     case 'a'...'z' :printf("Small Letter");
        break;
     case '0'...'9' :printf("Digit");
        break;
    default : printf("Special Symbols"); 
        break;
    }
    return 0;
}