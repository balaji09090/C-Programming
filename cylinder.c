#include<stdio.h>
int main()
{
    float pi=3.14,radius,height,surfaceArea,volume;
    printf("Enter the radius of cylinder");
    scanf("%f",&radius);
    printf("Enter the height of cylinder");
    scanf("%f",&height);
    surfaceArea = 2*pi*radius*radius+2*pi*radius*height;
    volume = pi*radius*radius*height;
    printf("Surface Area of the cylinder is%.2f\n",surfaceArea);
    printf("Volume of the cylinder is%.2f\n",volume);
    return 0;
}