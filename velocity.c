#include<stdio.h>
int main()
{
    float u,a,t,v,s;
    printf("Enter the intial velocity(u):");
    scanf("%f",&u);
    printf("Enter the acceleration(a):");
    scanf("%f",&a);
    printf("Enter the time(t):");
    scanf("%f",&t);
    v = u + a * t;
    s = (u*t)+(0.5*a*t*t);
    printf("The velocity is%f\n",v);
    printf("The distance is %f\n",s);
    return 0;
}