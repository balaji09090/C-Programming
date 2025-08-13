#include <stdio.h>
int main()
{
    float pi = 3.14, radius, area, circumference;
    printf("Enter the radius of the Circle");
    scanf("%f", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("Area of circle is%.2f\n", area);
    printf("Circumference of circle is%.2f\n", circumference);
    return 0;
}
