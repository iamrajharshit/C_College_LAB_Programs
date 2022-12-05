#include<stdio.h>

int main(){

    int n,m,i,A[n],B[m],D[n+m],*C;

    printf("Enter size of A Array: \n");

    scanf("%d",&n);

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
    printf("\nEnter size of B Array: \n");

    scanf("%d",&m);

    printf("Enter elements for B array: \n");

    for (i=0;i<m;i++)

    {
        scanf("%d",&B[i]);

    }
    C=&B[0];
    printf("\n Element in array are :\n");
    for(i=0;i<m;i++)
    {
        printf("\t%d",(*C));
        C++;
    }
    printf("\nMerged array:\n");
    /*for(int k=0;k<(sizeof(A));k++)
    D[k]=A[k];

    for(j=(sizeof(A)-1),i=0;j<(sizeof(A)+sizeof(B)),i<(sizeof(B));j++,i++)
    D[j]=B[i];

     C=&D[0];
    printf("\n Merged Elements in array are :\n");
    for(i=0;i<(sizeof(D));i++)
    {
        printf("\t%d",(*C));
        C++;}*/

     printf("size of A=%d",sizeof(A));
return 0;
}
