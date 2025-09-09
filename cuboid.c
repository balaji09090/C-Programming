#include <stdio.h>
int main()
{
    float l, b, h, surfaceArea, volume;
    printf("Enter the height of cuboid :");
    scanf("%f", &h);
    printf("Enter the breadth of cuboid :");
    scanf("%f", &b);
    printf("Enter the length of cuboid :");
    scanf("%f", &l);
    surfaceArea = 2 * l * b + l * h + b * h;
    volume = l * b * h;
    printf("The Surface Area of the cuboid is %.2f\n",surfaceArea);
    printf("The Volume of the cuboid is %.2f\n",volume);
    return 0;
}