#include<stdio.h>
int main()
{
    int i,n,count=0,sum=0;
    printf("Enter A Number :");
    scanf("%d",&n);
    printf("Factor :");
    for ( i = 1; i <= n; i++)
    {
        if(n%i==0)
        count++;
        sum+=i;
    }
    printf("\nCount of Factors = %d",count);
    printf("\nSum of Factors = %d\n",sum);
    return 0;
}