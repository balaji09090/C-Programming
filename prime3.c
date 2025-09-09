#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,cnt=0;
    printf("Enter A Number :");
    scanf("%d",&n);

    if(n%2==0 || n%3==0)
      printf("Not Prime Number");
      else
      {
        for ( i = 5; i <=sqrt(n); i+=6)
        {
            if (n%i==0||n%(i+2)==0)
            {
                cnt++;
                break;
            }
            
        }
    
        if (cnt==0)
        
            printf("Prime Number");
            else
            printf("Not Prime Number");
    
        
      }
}