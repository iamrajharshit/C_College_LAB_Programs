#include <stdio.h>
#include <stdlib.h>

int main()
{   int m,n,temp1,temp2,rem,lcm,gcd;
    printf("Enter the numbers m and n\n");
    scanf("%d%d",&m,&n);
    temp1=m;
    temp2=n;
    while(n!=0){
    rem=m%n;
    m=n;
    n=rem;
    }
    gcd=m;
    lcm=(temp1*temp2)/gcd;
    printf("The lcm of %d and%d is: %d\n",temp1,temp2,lcm);
    printf("The gcd of %d and %d is: %d",temp1,temp2,gcd);
    return 0;
}
