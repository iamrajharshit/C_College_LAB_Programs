#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum;
    printf("Enter a integer for a:\n");
    scanf("%d",&a);
    printf("Enter another integer for b:\n");
    scanf("%d",&b);
    sum=a+b;
    printf("The sum of integers %d and %d is: %d",a,b,sum);
    return 0;
}
