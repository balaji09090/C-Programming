#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    (n&1)?printf("Odd Number"):printf("Even Number");
    return 0;        
}