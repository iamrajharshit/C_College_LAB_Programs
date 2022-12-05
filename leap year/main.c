#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter a year\n");
    scanf("%d",&year);
    if(year%4==0||year%400==0||year%100==0)
    printf("%d is a leap year");
    else
    prinf("%d is not a leap year");
    return 0;
}
