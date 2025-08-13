#include<stdio.h>
int main()
{
    int amount;
    printf("Enter an Amount");
    scanf("%d",&amount);
    printf("\n10*%d: ", amount/10);
    amount=amount%10;
    printf("\n5*%d:  ", amount/5);
    amount=amount%5;
    printf("\n1*%d: ",amount/1);
    amount=amount%1;
    return 0;
}
