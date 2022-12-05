#include <stdio.h>
#include <stdlib.h>
void asc(int a[10],int n){
 int i,j,temp;
 for(i=1;i<n;i++)
 for(j=0;j<n-i-1;j++)
 if(a[j]>a[j+1]){
 temp =a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
}
int main()
{
   int n,i,j,a[100];
   n=10;
   printf("Enter the value in array\n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);

   asc(a,n);

   printf("Sorted array is\n");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
    return 0;
}
