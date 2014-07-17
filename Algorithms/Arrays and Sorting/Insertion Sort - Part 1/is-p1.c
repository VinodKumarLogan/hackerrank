#include <stdio.h>
#include <stdlib.h>
void printValues(int *ar,int a, int b) {
    int i;
    for(i=a;i<=b;i++)
        printf("%d ",ar[i]);
    printf("\n");
}
void insertionSort(int ar_size, int *ar) {    
    int i,j,key=ar[ar_size-1];
    for(i=ar_size-2;i>=0;i--) {
        if(ar[i]>key) {
            ar[i+1] = ar[i];
            printValues(ar,0,ar_size-1);
        }
        else
            break;
    }
    ar[i+1] = key;
    printValues(ar,0,ar_size-1);
}
int main(void) {   
    int _ar_size,_ar_i,*_ar;
    scanf("%d", &_ar_size);
    _ar = (int*)malloc(sizeof(int)*_ar_size);
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++)
        scanf("%d", &_ar[_ar_i]);
    insertionSort(_ar_size, _ar);
    return 0;
}