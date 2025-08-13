#include <stdio.h>
int main() 
{
    float a, b, AM, HM;
    printf("Enter first number (a): ");
    scanf("%f", &a);
    printf("Enter second number (b): ");
    scanf("%f", &b);
    AM = (a + b) / 2;
    HM = (a * b) / (a + b);
    printf("Arithmetic Mean (AM) = %.2f\n", AM);
    printf("Harmonic Mean (HM) = %.2f\n", HM);
    return 0;
}