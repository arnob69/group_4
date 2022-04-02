#include <stdio.h>
#include <math.h>
int main()
{
    float n, result;
    printf("Enter a number : ");
    scanf("%f",&n);
    result = sqrt(n);
    printf("The square root of %.2f = %.2f", n, result);

    return 0;
}