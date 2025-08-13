#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter first side:");
    scanf("%d",side1);
    printf("Enter second side:");
    scanf("%d",side2);
    printf("Enter third side");
    scanf("%d",side3);
    if ((side1+side2>side3)&&(side2+side3>side1)&&(side1+side3>side2))
    {
        printf("The triangle is valid\n");
    }else
    {
        printf("The triangle is not valid\n");
    }
    return 0;    
}