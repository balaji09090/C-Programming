#include<stdio.h>
int main()
{
    int i,x,y;
    printf("Enter X & Y");
    scanf("%d%d",&x,&y);
    x=(x%2 ==0)?x:x+1;
    for(i=x;i<=y;i+=2)
    printf("%d\n",i);

    return 0;
}