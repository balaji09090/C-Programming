#include<stdio.h>
int main()
{
    int n,i,cnt=0;
    printf("Enter A Number :");
    scanf("%d",&n);
    for ( i = 2; i <=n/2; i++)
    {
        if(n%i==0)
        cnt++;
    }
    if(cnt==0)
    printf("%d is Prime Number");
    else 
    printf("%d is Not Primre Number");

    return 0;
}