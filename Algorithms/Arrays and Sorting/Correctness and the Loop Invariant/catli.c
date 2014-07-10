#include <stdio.h>
#include <stdlib.h>
void insertionSort(int ar_size, int *  ar) {    
    int i,j,value;
    for(i=1;i<ar_size;i++) {
        value=ar[i];
        j=i-1;
        while(j>=0 && ar[j]>value) {
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1]=value;        
    }
    for(j=0;j<ar_size;j++)
        printf("%d ",ar[j]);
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