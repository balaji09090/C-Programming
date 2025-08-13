#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter A Number");
    scanf("%d",&n);
    while(n>=2)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial is %d",fact);
}