#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("The temperature in Celsius = %.2f", c);
    return 0;
}