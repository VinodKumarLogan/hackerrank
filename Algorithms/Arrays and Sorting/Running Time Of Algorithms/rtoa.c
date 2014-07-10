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
int main(int argc, char const *argv[]) {
	int n,*ar,*temp,i=0;
	scanf("%d",&n);
	ar = (int*)malloc(sizeof(int)*n);
	temp = (int*)malloc(sizeof(int)*n);
	while(i<n)
		scanf("%d",&ar[i++]);
	printf("%d",mergeSort(ar,temp,0,n-1));
	return 0;
}