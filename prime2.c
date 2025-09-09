#include <stdio.h>
#include<math.h>
int main()
{
    int n, i, cnt = 0;
    printf("Enter A Number :");
    scanf("%d", n);
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            cnt++;
    }
    if (cnt == 0)
        printf("%d is Prime Number", n);
    else
        printf("%d is Not Primre Number", n);
    return 0;
}