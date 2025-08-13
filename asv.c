#include <stdio.h>
int main()
{
    float pi = 3.14, radius, area, circumference, volume;
    int ch;
    printf("Enter The Radius :");
    scanf("%f", &radius);
    printf("\n1.Area \n2.Circumference \n3.Volume");
    printf("Enter The Choice:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Area is :%.2f", area = pi * radius * radius);
        break;
    case 2:
        printf("Circumference is :%.2f", circumference = 2 * pi * radius);
        break;
    case 3:
        printf("Volume is :%.2f", volume = (4.0 / 3.0) * pi * radius * radius * radius);
        break;
    }
    return 0;
}