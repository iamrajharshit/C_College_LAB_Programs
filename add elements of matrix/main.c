#include <stdio.h>
#include <stdlib.h>
void sum(int a[10][10],int b[10][10],int m,int n);
int main(){
  int i,j,a[10][10],b[10][10],m,n,p,q;
  printf("Enter the row and col of the matrix A\n");
  scanf("%d%d",&m,&n);
  printf("Enterthe values for A\n");
for(i=0;i<m;i++){
  for(j=0;j<n;j++){
  scanf("%d",&a[i][j]);
  }
}
    printf("Enter the rows and col of the matrix B\n");
    scanf("%d%d",&p,&q);
    printf("Enterthe values for b\n");
for(i=0;i<p;i++){
  for(j=0;j<q;j++){
  scanf("%d",&b[i][j]);}
}
if(m==p&n==q)
sum(a,b,m,n);

else
printf("not possible");
    return 0;
}
void sum(int a[10][10],int b[10][10],int m,int n){
int i,j,c[10][10];
for (i=0;i<m;i++){
for(j=0;j<n;j++){
c[i][j]=a[i][j]+b[i][j];
}}
printf("The sum is:\n");
for (i=0;i<m;i++){
for(j=0;j<n;j++){
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;}


