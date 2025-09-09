#include <stdio.h>
int main()
{
    int i, j, n,cnt=1;
    printf("Enter A Number :");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ",cnt);
            cnt++;
        }
        printf("\n");
    }
    return 0;
}