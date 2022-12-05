#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,multiple;
    printf("Enter a decimal number for a:\n");
    scanf("%f",&a);
    printf("Enter another decimal number for b:\n");
    scanf("%f",&b);
    multiple=a*b;

    printf("The multiplication of %f and %f is: %f",a,b,multiple);
    return 0;
}
