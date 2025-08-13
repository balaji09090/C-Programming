#include <stdio.h>
int main()
{
    float fahrenheit, celsius, kelvin;
    printf("Enter temperature in Fahrenheit");
    scanf("%f", &fahrenheit);
    celsius = (5 / 9) * (fahrenheit - 32);
    kelvin = celsius + 273.15;
    printf("Temperature in Celsius%.2fC", celsius);
    printf("Temperature in kelvin%.2fk", kelvin);
    return 0;
}