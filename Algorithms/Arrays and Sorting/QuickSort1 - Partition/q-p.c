#include <stdio.h>
#include <stdlib.h>
void quickSort1Partition(int *ar, int n, int p) {
    int i,j,temp;
    for(i=1;i<n;i++) {
        if(ar[i]<ar[p]) {
            temp = ar[i];
            for(j=i;j>p;j--)
                ar[j] = ar[j-1];
            ar[p] = temp;
            p++;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",ar[i]);
}

int main(void) {   
    int *ar,n,p,i;
    scanf("%d",&n);
    ar = (int*)malloc(sizeof(int)*n);
    for (i=0;i<n;++i)
        scanf("%d",&ar[i]);
    quickSort1Partition(ar,n,0);
    return 0;
}