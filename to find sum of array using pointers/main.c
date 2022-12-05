#include <stdio.h>
#include <stdlib.h>

int main()
{   int size,sum=0;
printf("enter the array size=\n");
scanf("%d",&size);

int arr[size];
int *prt = arr;
printf("Enter the array items=\n");
for(int i=0; i<size; i++)
{
 scanf("%d",prt+i);
 sum = sum+ *(prt+i);
}
 printf("\n The sum od array items =%d\n",sum);
    return 0;
}
