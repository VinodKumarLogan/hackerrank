#include <stdio.h>
#include <stdlib.h>
int partition(int *ar,int low, int high) {
    int i=low,j=high,temp,p=low;
    for(i=low+1;i<=high;i++) {
        if(ar[i]<ar[p]) {
            temp = ar[i];
            for(j=i;j>p;j--)
                ar[j] = ar[j-1];
            ar[p] = temp;
            p++;
        }
    }
    return p;
}
void printValues(int *ar,int a, int b) {
    int i;
    for(i=a;i<=b;i++)
        printf("%d ",ar[i]);
    printf("\n");
}
void quickSort(int *ar,int low, int high) {
    int pivot;
    if(low<high) {
        pivot = partition(ar,low,high);
        quickSort(ar,low,pivot-1);
        quickSort(ar,pivot+1,high);
        printValues(ar,low,high);
    }
}
int main(void) {   
    int *ar,n,p,i;
    scanf("%d",&n);
    ar = (int*)malloc(sizeof(int)*n);
    for (i=0;i<n;++i)
        scanf("%d",&ar[i]);
    quickSort(ar,0,n-1);
    return 0;
}