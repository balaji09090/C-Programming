#include<stdio.h>
int main()
{
    int fact=1,n,i;
    printf("Enter The Number");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
     fact=fact*i;
     printf("%d",fact);
     return 0;
}