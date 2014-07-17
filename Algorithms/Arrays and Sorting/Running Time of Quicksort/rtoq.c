#include <stdio.h>
#include <stdlib.h>
int merge(int *ar, int *temp, int left, int mid, int right) {
	int i,j,k,count = 0;
	i = left;
	j = mid;
	k = left;
	while(i<=(mid-1) && j<=right) {
		if(ar[i]<= ar[j])
			temp[k++] = ar[i++];
		else {
			temp[k++] = ar[j++];
			count += (mid-i);
		}
	}
	while(i<=(mid-1))
		temp[k++] = ar[i++];
	while(j<=right)
		temp[k++] = ar[j++];
	for(i=left;i<=right;i++)
		ar[i] = temp[i];
	return count;
}

int mergeSort(int *ar, int *temp, int left, int right) {
	int mid,count=0;
	if(left<right) {
		mid = (left+right)>>1;
		count += mergeSort(ar,temp,left,mid);
		count += mergeSort(ar,temp,mid+1,right);
		count += merge(ar,temp,left,mid+1,right);
	}
	return count;	
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *ar,int low, int high, int *quickCount) {
    int i=low,j,temp,p=ar[high],count=0;
    for(j=low;j<high;j++) {
    	if(ar[j]<=p) {
    		swap(&ar[j],&ar[i]);
    		count++;
    		i++;
    	}
    }
    swap(&ar[i],&ar[high]);
    *quickCount += count + 1;
    return i;
}

void quickSort(int *ar,int low, int high, int *quickCount) {
    int pivot;
    if(low<high) {
        pivot = partition(ar,low,high,quickCount);
        quickSort(ar,low,pivot-1,quickCount);
        quickSort(ar,pivot+1,high,quickCount);
    }
}

int main(int argc, char const *argv[]) {
	int n,*arInsertion,*arQuick,*tempInsertion,i=0,quickCount=0,insertCount=0;
	scanf("%d",&n);
	arInsertion = (int*)malloc(sizeof(int)*n);
	arQuick = (int*)malloc(sizeof(int)*n);
	tempInsertion = (int*)malloc(sizeof(int)*n);
	while(i<n) {
		scanf("%d",&arInsertion[i]);
		arQuick[i] = arInsertion[i];
		i++;
	}
	insertCount = mergeSort(arInsertion,tempInsertion,0,n-1);
	quickSort(arQuick,0,n-1,&quickCount);
	printf("%d",insertCount-quickCount);
	return 0;
}