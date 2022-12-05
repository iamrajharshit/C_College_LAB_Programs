#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,c;
printf("Enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("%d is greatest among all",a);
else if(b>a&&b>c)
printf("%d is greatest among all",b);
else
printf("%d is greatest among all",c);

    return 0;
}
