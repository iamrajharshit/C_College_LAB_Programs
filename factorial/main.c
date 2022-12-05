#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, fact=1;
    printf("Enter a number n\n");
    scanf("%d",&n);
    while(n!=0)
    {
     fact=fact*n;
     n=n-1;
    }
    printf("Factorial=%d",fact);
    return 0;
}
