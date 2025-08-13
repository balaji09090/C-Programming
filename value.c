#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter Swapping\n a=%d\n,b=%d\n",a,b);
    return 0;
}