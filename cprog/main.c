#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{   int n,rev,rem;
    printf("Enter number for n\n");
    scanf("%d",&n);
    while(n!=0)
    {
    rem=n%10;
    rev=(rev*10)+rem;
    n=n/10;
    }
    printf("%d",rev);
    return 0;
}
