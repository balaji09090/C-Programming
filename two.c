#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two number");
    scanf("%d%d",&a,&b);
    if(a>b)
             printf("Max is %d",a);
    else
         printf("Max is %d",b);
    return 0;        
}