#include<stdio.h>

int main(){

    int n,m,i,A[100],B[100],D[100],*C;

    printf("size of A Array: 5");

    n=5;

    printf("Enter elements for A array: \n");

    for (i=0;i<n;i++)
    {
        scanf("%d",&A[i]);

    }
    C=&A[0];
    printf("\n Element in array are :\n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",(*C));
        C++;
    }
    printf("\nsize of B Array: 5\n");

    m=5;

    printf("Enter elements for B array: \n");

    for (i=0;i<m;i++)

    {
        scanf("%d",&B[i]);
        C++;
    }
    C=&B[0];
    printf("\n Element in array are :\n");
    for(i=0;i<m;i++)
    {
        printf("\t%d",(*C));
        C++;
    }
    printf("Merged array:\n");
    for(int k=0;k<5;k++)
    D[k]=A[k];
    int j;
    for(j=5,i=0;j<5,i<5;j++,i++)
    D[j]=B[i];

     C=&D[0];
    printf("\n Merged Elements in array are :\n");
    for(i=0;i<10;i++)
    {
        printf("\t%d",*C);
        C++;

        }
return 0;
}

